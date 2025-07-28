#include <stdio.h>
#include <limits.h>
#include <float.h>

#define INDENT2 "  "

int main() {
    printf("Ranges:\n");
    printf(INDENT2 "C:\n");
    printf(INDENT2 INDENT2 "int8:\n");
    printf(INDENT2 INDENT2 INDENT2 "min: %d\n", SCHAR_MIN);
    printf(INDENT2 INDENT2 INDENT2 "max: %d\n", SCHAR_MAX);
    printf(INDENT2 INDENT2 "uint8:\n");
    printf(INDENT2 INDENT2 INDENT2 "min: 0\n");
    printf(INDENT2 INDENT2 INDENT2 "max: %u\n", UCHAR_MAX);
    printf(INDENT2 INDENT2 "int16:\n");
    printf(INDENT2 INDENT2 INDENT2 "min: %d\n", SHRT_MIN);
    printf(INDENT2 INDENT2 INDENT2 "max: %d\n", SHRT_MAX);
    printf(INDENT2 INDENT2 "uint16:\n");
    printf(INDENT2 INDENT2 INDENT2 "min: 0\n");
    printf(INDENT2 INDENT2 INDENT2 "max: %u\n", USHRT_MAX);
    printf(INDENT2 INDENT2 "int32:\n");
    printf(INDENT2 INDENT2 INDENT2 "min: %d\n", INT_MIN);
    printf(INDENT2 INDENT2 INDENT2 "max: %d\n", INT_MAX);
    printf(INDENT2 INDENT2 "uint32:\n");
    printf(INDENT2 INDENT2 INDENT2 "min: 0\n");
    printf(INDENT2 INDENT2 INDENT2 "max: %u\n", UINT_MAX);
    printf(INDENT2 INDENT2 "int64:\n");
    printf(INDENT2 INDENT2 INDENT2 "min: %lld\n", LLONG_MIN);
    printf(INDENT2 INDENT2 INDENT2 "max: %lld\n", LLONG_MAX);
    printf(INDENT2 INDENT2 "uint64:\n");
    printf(INDENT2 INDENT2 INDENT2 "min: 0\n");
    printf(INDENT2 INDENT2 INDENT2 "max: %llu\n", ULLONG_MAX);

    return 0;
}
