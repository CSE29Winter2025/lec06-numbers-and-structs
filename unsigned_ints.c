#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int unsigned_max = UINT_MAX;
    unsigned int unsigned_max_plus_one = unsigned_max + 1;
    printf("unsigned_max: %u\n", unsigned_max);
    printf("unsigned_max_plus_one: %u\n", unsigned_max_plus_one);
    return 0;
}
