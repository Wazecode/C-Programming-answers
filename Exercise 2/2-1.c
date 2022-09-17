#include <stdio.h>
#include <limits.h>

int main() {
  printf("Signed\n"
         "Char  -\t %d to %d\n"
         "Short -\t %d to %d\n"
         "Int   -\t %d to %d\n"
         "Long  -\t %ld to %ld\n"
         "UnSigned\n"
         "Char  -\t %d\n"
         "Short -\t %d\n"
         "Int   -\t %u\n"
         "Long  -\t %lu\n",
         SCHAR_MIN, SCHAR_MAX,
         SHRT_MIN, SHRT_MAX,
         INT_MIN, INT_MAX,
         LONG_MIN, LONG_MAX,
         UCHAR_MAX,
         USHRT_MAX,
         UINT_MAX,
         ULONG_MAX);
  return 0;
}
