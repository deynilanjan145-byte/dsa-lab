#include <stdio.h>

float square_root(float val) {
    if (val < 0) {
        return -1;
    }

    float low = 0, high = val, mid;

    if (val < 1)
        high = 1;

    for (int i = 0; i < 100; i++) {
        mid = (low + high) / 2;

        if (mid * mid > val) {
            high = mid;
        } else {
            low = mid;
        }
    }

    return (low + high) / 2;
}

int main() {
    float val;
    scanf("%f", &val);

    if (val < 0) {
        printf("Square root of a negative number is not possible.\n");
        return 0;
    }

    float ans = square_root(val);
    printf("The square root value = %.6f\n", ans);

    return 0;
}
