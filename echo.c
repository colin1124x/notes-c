#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    char eof = '\n';

    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-e") == 0) {
            eof = '\0';
            continue;
        }
        if (i > 1) {
            printf(" ");
        }
        printf("%s", argv[i]);
    }
    printf("%c", eof);
}
