#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("Ranges of integer types:\n");
    
    // Using standard headers to get the ranges
    printf("From <limits.h> header:\n");
    printf("CHAR_MIN   : %d\n", CHAR_MIN);
    printf("CHAR_MAX   : %d\n", CHAR_MAX);
    printf("SCHAR_MIN  : %d\n", SCHAR_MIN);
    printf("SCHAR_MAX  : %d\n", SCHAR_MAX);
    printf("UCHAR_MAX  : %u\n", UCHAR_MAX);
    printf("SHRT_MIN   : %d\n", SHRT_MIN);
    printf("SHRT_MAX   : %d\n", SHRT_MAX);
    printf("USHRT_MAX  : %u\n", USHRT_MAX);
    printf("INT_MIN    : %d\n", INT_MIN);
    printf("INT_MAX    : %d\n", INT_MAX);
    printf("UINT_MAX   : %u\n", UINT_MAX);
    printf("LONG_MIN   : %ld\n", LONG_MIN);
    printf("LONG_MAX   : %ld\n", LONG_MAX);
    printf("ULONG_MAX  : %lu\n", ULONG_MAX);
    
    // Using direct computation to get the ranges
    printf("Direct computation:\n");
    printf("CHAR_MIN   : %d\n", -(char)((unsigned char)~0 >> 1) - 1);
    printf("CHAR_MAX   : %d\n", (char)((unsigned char)~0 >> 1));
    printf("SCHAR_MIN  : %d\n", -(char)((unsigned char)~0 >> 1) - 1);
    printf("SCHAR_MAX  : %d\n", (char)((unsigned char)~0 >> 1));
    printf("UCHAR_MAX  : %u\n", (unsigned char)~0);
    printf("SHRT_MIN   : %d\n", -(short)((unsigned short)~0 >> 1) - 1);
    printf("SHRT_MAX   : %d\n", (short)((unsigned short)~0 >> 1));
    printf("USHRT_MAX  : %u\n", (unsigned short)~0);
    printf("INT_MIN    : %d\n", -(int)((unsigned int)~0 >> 1) - 1);
    printf("INT_MAX    : %d\n", (int)((unsigned int)~0 >> 1));
    printf("UINT_MAX   : %u\n", (unsigned int)~0);
    printf("LONG_MIN   : %ld\n", -(long)((unsigned long)~0 >> 1) - 1);
    printf("LONG_MAX   : %ld\n", (long)((unsigned long)~0 >> 1));
    printf("ULONG_MAX  : %lu\n", (unsigned long)~0);

    return 0;
}
 
