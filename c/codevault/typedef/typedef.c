#include <stdio.h>
#include "typedef.h"

void point_display(Point_t point) {
    printf("    -> point_display(Point_t point)\n");
    printf("       point.x = %lf, point.y = %lf\n", point.x, point.y);
}
