#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(void) {
    int choice;
    do {
        printf("\n=== AREA CALCULATOR ===\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Triangle (base & height)\n");
        printf("4. Square\n");
        printf("5. Trapezoid\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) return 0;
// B01002362
// Rushalle
        double a, b, area;
        switch (choice) {
            case 1:
                printf("Enter radius: ");
                scanf("%lf", &a);
                if (a < 0) { printf("Radius must be non-negative.\n"); break; }
                area = PI * a * a;
                printf("Area of circle = %.4f\n", area);
                break;
            case 2:
                printf("Enter length and width: ");
                scanf("%lf %lf", &a, &b);
                if (a < 0 || b < 0) { printf("Sides must be non-negative.\n"); break; }
                area = a * b;
                printf("Area of rectangle = %.4f\n", area);
                break;
            case 3:
                printf("Enter base and height: ");
                scanf("%lf %lf", &a, &b);
                if (a < 0 || b < 0) { printf("Base/height must be non-negative.\n"); break; }
                area = 0.5 * a * b;
                printf("Area of triangle = %.4f\n", area);
                break;
            case 4:
                printf("Enter side: ");
                scanf("%lf", &a);
                if (a < 0) { printf("Side must be non-negative.\n"); break; }
                area = a * a;
                printf("Area of square = %.4f\n", area);
                break;
            case 5:
                printf("Enter bases a, b and height h (a b h): ");
                scanf("%lf %lf %lf", &a, &b, &area); // reusing 'area' temporarily as h
                if (a < 0 || b < 0 || area < 0) { printf("Values must be non-negative.\n"); break; }
                printf("Area of trapezoid = %.4f\n", 0.5 * (a + b) * area);
                break;
            case 0:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);
    return 0;
}
