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


    printf("x vērtība, kura atbilst vienādojumam f(x) = arctan(x) - %lf ir %lf\n", c, x);
    printf("Pie šīs x vērtības y = %lf\n", y);
    printf("Iterāciju skaits, lai atrastu sakni, ir %d\n", iterations);
    return 0;
}
