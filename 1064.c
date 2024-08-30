#include <stdio.h>
#include <math.h>

double length(double ax, double ay, double bx, double by) {
    double x = ax - bx;
    double y = ay - by;
    return sqrt(x * x + y * y);
}

int main() {
    double ax, ay, bx, by, cx, cy;
    scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);

    if ((ay - by) * (bx - cx) == (by - cy) * (ax - bx)) {
        printf("-1.0\n");
        return 0;
    }

    double ab_length = length(ax, ay, bx, by);
    double bc_length = length(bx, by, cx, cy);
    double ac_length = length(ax, ay, cx, cy);

    double perimeter_1 = 2 * (ab_length + bc_length);
    double perimeter_2 = 2 * (bc_length + ac_length);
    double perimeter_3 = 2 * (ab_length + ac_length);

    double max_perimeter = fmax(fmax(perimeter_1, perimeter_2), perimeter_3);
    double min_perimeter = fmin(fmin(perimeter_1, perimeter_2), perimeter_3);

    printf("%.16lf\n", max_perimeter - min_perimeter);

    return 0;
}
