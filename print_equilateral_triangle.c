
void print_equilateral_triangle(int size) {

    int i, j, tmp, size_bottom;
    size_bottom = 2 * size - 1;

    for (i = 1; i <= size_bottom; i+=2) {
        tmp = (size_bottom - i)/2;
        for (j = 1; j <= size_bottom; j++) {
            if (j > size_bottom - tmp) break;
            if (j <= tmp) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}