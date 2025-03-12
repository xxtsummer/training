#include<stdio.h>
int main() {
    double x, y;
    scanf_s("%lf", &x);
    if (0 <= x && x<50) {
        y = x * 0.53;
        printf("cost = %.2lf", y);
    }
    else if (x < 0) {
        printf("Invalid Value!");
    }
    else {
        y = 50 * 0.53 + (x - 50) * 0.58;
        printf("cost = %.2lf", y);
    }
    return 0;
}