#include <stdio.h>
#include <limits.h>

int main() {
    int signed_max = INT_MAX;
    int signed_min = INT_MIN;
    int signed_max_plus_one = signed_max + 1;
    int signed_min_minus_one = signed_min - 1;
    printf("signed_max: %d\n", signed_max);
    printf("signed_min: %d\n", signed_min);
    printf("signed_max_plus_one: %d\n", signed_max_plus_one);
    printf("signed_min_minus_one: %d\n", signed_min_minus_one);
    return 0;
}
