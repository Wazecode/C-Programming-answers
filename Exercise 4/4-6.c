#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

#define MAXVAL 100
#define VARS 26
#define NUMBER '0'

int getop(char []);
void push(double);
double pop();
void clear_stack();


int main() {
    int type;
    int itr;
    double op1, op2;
    char s[MAXVAL];

    int var;
    double variables[VARS] = {0.0};

    while((type = getop(s)) != EOF) {
        printf("%s\n",s);
        switch(type) {
            case NUMBER:
                push(atof(s));
                break;

            // -------------- Arithematic --------------------
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if(op2 != 0)
                    push(pop() / op2);
                else
                    printf("Error: zero divisor\n");
                break;
            case '%':
                op2 = pop();
                if(op2 != 0)
                    push(fmod(op2, pop()));
                else
                    printf("Error: zero divisor\n");
                break;
            case 't': // Top
                push(op2 = pop());
                printf("the top element : %g\n", op2);
                break;

            // ----------- Math functions -----------------

            case 's': // sine
                push(sin(pop()));
                break;
            case 'c': // cosine
                push(cos(pop()));
                break;
            case 'e': // exp
                push(exp(pop()));
                break;
            case '^': // power
                op2 = pop();
                push(pow(pop(), op2));
                break;

            // --------- Commands --------------
            case 'D': // duplicate
                op2 = pop();
                push(op2);
                push(op2);
                break;
            case 'S': // swap
                op1 = pop();
                op2 = pop();
                push(op1);
                push(op2);
                break;
            case 'C': // clear
                clear_stack();
                break;

            // ------------ Variables -------------

            case '$':
                var = getop(s);
                if(!islower(var)) {
                    printf("Error: Variable mispelled!");
                }else {
                    push(variables[var - 97]);
                }
                break;

            case '=':
                if (var != 0 && getop(s) == NUMBER) {
                    op1 = atof(s);
                    pop();
                    push(op1);
                    variables[var - 97] = op1;
                    var = 0;
                } else {
                    printf("Error: Syntax Error");
                }
                break;

            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
    return 0;
}

int sp = 0;
double val[MAXVAL];

void push(double f) {
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full can't push %g\n", f);
}

double pop() {
    if (sp > 0) 
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

void clear_stack() {
    sp = 0;
}

int getch();
void ungetch(int);
int setVar(char[]);

int getop(char s[]) {

    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t');

    s[1] = '\0';
    if(!isdigit(c) && c != '.') {
        return c;
    }

    i = 0;
    if(isdigit(c))
        while (isdigit(s[++i] = c = getch())) ;

    if(c == '.')
        while (isdigit(s[++i] = c = getch())) ;

    s[i] = '\0';
    if( c != EOF)
        ungetch(c);

    return NUMBER;
}

#define BUFFSIZE 100

char buf[BUFFSIZE];
char bufp = 0;

int getch() {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
    if(bufp >= BUFFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}
