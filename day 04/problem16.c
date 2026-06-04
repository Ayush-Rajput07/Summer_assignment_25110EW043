//wap to print armstrong number in a given range
#include <stdio.h>
int main() {
    int lower, upper, n, x, sum, rem;

    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for (n = lower; n <= upper; n++) {
        x = n;
        sum = 0;

        while (x > 0) {
            rem = x % 10;
            sum += rem * rem * rem;
            x /= 10;
        }

        if (sum == n) {
            printf("%d ", n);
        }
    }
    printf("\n");

    return 0;
}