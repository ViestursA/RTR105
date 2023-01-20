#include <stdio.h>
#include <math.h>

double modified_atan(double x, double c) {
    return atan(x) - c;
}

int main() {
    double a, b, c, x, eps, y;
    int iterations = 0;

    printf("Ievadiet intervāla sākuma vērtību a = ");
    scanf("%lf", &a);
    printf("Ievadiet intervāla beigu vērtību b = ");
    scanf("%lf", &b);
    printf("Ievadiet vērtību c sekojošam vienādojumam atan(x) = c :");
    scanf("%lf", &c);
    printf("Ievadiet precizitāti, kurā veikt aprēķinus eps = ");
    scanf("%lf", &eps);

    if (modified_atan(a, c) * modified_atan(b, c) > 0) {
        printf("y = arctan(x) funkcijai intervālā [%lf, %lf] nav sakņu!\n", a, b);
        return 0;
    }

    while (fabs(y) > eps){
        x = (a + b) / 2;
        y = modified_atan(x, c);
        if (modified_atan(a, c) * y < 0) {
            b = x;
        } else {
            a = x;
        }
        iterations++;
    } 

    x = a;
    printf("\tx\ty\n");
    while(x<b){
       printf("%10.1f%10.1f\n",x,modified_atan(x,c));
       x += eps;
    }

    printf("The value of x that satisfies f(x) = arctan(x) - %lf is %lf\n", c, x);
    printf("The value of f(x) for this x is %lf\n", y);
    printf("The number of iterations used to find this x is %d\n", iterations);
    return 0;
}
