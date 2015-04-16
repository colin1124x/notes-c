
void print_diamond_line(int width, int space) {
    int w;
    for (w = 1; w <= width - space; w++) {
        w <= space ? printf(" ") : printf("*");
    }
}

void print_diamond(int size) {

    int width = size * 2 - 1,
        height = size * 2 - 1,
        space = (width - 1) / 2,
        h;

    for (h = 1; h <= height; h++) {

        print_diamond_line(width, space);
        h < size ? space-- : space++;
        printf("\n");
    }
}


