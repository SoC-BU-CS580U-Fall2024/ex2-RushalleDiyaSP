#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int n) {
    if (n <= 1) return 0;
    int sum = 1; // 1 is always a divisor
    for (int d = 2; d * d <= n; ++d) {
        if (n % d == 0) {
            sum += d;
            int other = n / d;
            if (other != d) sum += other;
        }
    }
    return sum == n;
} //Rushalle

int main(void) {
    int L, R;
    printf("Enter range [L R]: ");
    if (scanf("%d %d", &L, &R) != 2) return 0;

    if (L > R) { int t = L; L = R; R = t; }
    if (R < 2) {
        printf("No perfect numbers in this range.\n");
        return 0;
    }
    if (L < 2) L = 2;

    printf("Perfect numbers in [%d, %d]: ", L, R);
    int found = 0;
    for (int n = L; n <= R; ++n) {
        if (isPerfect(n)) {
            printf("%d ", n);
            found = 1;
        }
    }
    if (!found) {
        printf("(none)");
    }
    printf("\n");
    return 0;
}
// B01002362
// Rushalle