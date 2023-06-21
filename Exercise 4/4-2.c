#include <stdio.h>
#include <ctype.h>
#include <math.h>

double atof(char a[]) {
    double val, power;
    int i, sign;
    int e = 0;
    int esign = 1;

    for(i = 0; isspace(a[i]); i++);

    sign = (a[i] == '-') ? -1 : 1;
    if(a[i] == '+' || a[i] == '-')
        i++;

    for(val = 0.0; isdigit(a[i]); i++)
        val = 10.0 * val + (a[i] - '0');

    if(a[i] == '.') i++;

    for(power = 1.0; isdigit(a[i]); i++) {
        val = 10.0 * val + (a[i] - '0');
        power *= 10.0;
    }

    if(a[i] == 'e' || a[i] == 'E') {
        i++;
        if(!(a[i] == '-' || a[i] == '+'))
            return -1;
        
        esign = (a[i] == '-') ? -1 : 1;
        i++;

        for(e = 0.0; isdigit(a[i]); i++)
            e = 10.0 * e + (a[i] - '0');
        
        e *= esign;
    }

    return sign * val * pow(10, e) / power;
}


int main() {

    char a[] = "123.45";
    char b[] = "-123.45";
    char c[] = "123.45e-6";
    char d[] = "123.45e+6";
    char e[] = "-123.45E+6";

    printf("%f\n", atof(a));
    printf("%f\n", atof(b));
    printf("%f\n", atof(c));
    printf("%f\n", atof(d));
    printf("%f\n", atof(e));


    return 0;
}