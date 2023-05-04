#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    *ptr = 42;
    free(ptr);
    return 0;
}
