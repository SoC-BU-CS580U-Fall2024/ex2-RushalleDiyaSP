#include <stdio.h>

int main(void) {
    double x, sum = 0.0;
    int count = 0;
    char more;
// B01002362
// Rushalle
    printf("Enter numbers to average. After each number, say Y to continue or N to stop.\n");

    do {
        printf("Number: ");
        if (scanf("%lf", &x) != 1) return 0;
        sum += x;
        count++;
        // B01002362
// Rushalle
        printf("Add another? (Y/N): ");
        // consume any leftover whitespace/newline safely
        do { more = (char)getchar(); } while (more == '\n' || more == '\r' || more == ' ');
        if (more >= 'a' && more <= 'z') more = (char)(more - 'a' + 'A'); // to upper
    } while (more == 'Y');

    if (count == 0) {
        printf("No numbers entered.\n");
    } else {
        printf("Average of %d number(s) = %.6f\n", count, sum / count);
    }
    return 0;
}
