#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "uso: %s <archivo>\n", argv[0]);
        return 1;
    }

    printf("archivo: %s\n", argv[1]);
    /* TODO: abrir en modo binario y leer los primeros bytes */
    return 0;
}
