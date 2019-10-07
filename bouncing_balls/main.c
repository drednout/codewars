#include <stdio.h>

int bouncingBall(double h, double bounce, double window) {
    if (h <= 0.0) {
        return -1;
    }
    if ((bounce <= 0.0) || (bounce > 1.0)) {
        return -1;
    }
    if (window >= h) {
        return -1;
    }

    double current_height = h;
    int view_count = 0;

    while (current_height > window) {
        // count ball which fall down
        ++view_count;
        current_height = current_height * bounce;
        if (current_height < window) {
            break;
        }
        // count ball which bounces up
        ++view_count;
    }

    return view_count;
}

int main() {
    /* my first program in C */
    printf("Hello, it's bouncing balls! \n");
    printf("bouncingBall(3, 0.66, 1.5)=%d, expected=3\n", bouncingBall(3, 0.66, 1.5));
    printf("bouncingBall(30, 0.75, 1.5)=%d, expected=21\n", bouncingBall(30, 0.75, 1.5));
    return 0;
}
