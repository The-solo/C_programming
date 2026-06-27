#include<stdio.h>
#include <assert.h>   // Diagnostics (e.g., assert macro)
#include <ctype.h>    // Character handling (e.g., isalpha, toupper)
#include <errno.h>    // Error handling (e.g., errno, EDOM, ERANGE)
#include <float.h>    // Floating-point characteristics (e.g., FLT_MAX, DBL_DIG)
#include <limits.h>   // Implementation-defined limits (e.g., INT_MIN, INT_MAX)
#include <math.h>     // Mathematical functions (e.g., sin, sqrt, pow)
#include <setjmp.h>   // Non-local jumps (e.g., setjmp, longjmp)
#include <signal.h>   // Signal handling (e.g., signal, raise)
#include <stdarg.h>   // Variable arguments (e.g., va_start, va_arg)
#include <stddef.h>   // Common definitions (e.g., NULL, size_t, offsetof)
#include <stdio.h>    // Input/output (e.g., printf, fopen, getchar)
#include <stdlib.h>   // General utilities (e.g., malloc, atoi, qsort)
#include <string.h>   // String handling (e.g., strcpy, strcmp, strlen)
#include <time.h>     // Date and time (e.g., time, strftime, clock)


int main() {

    int square = sqrt(4);
    printf("%d\n", square);

    return 0;
}
