#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements = 5;
    int *ptr = malloc(num_elements * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    int new_size = 10;
    ptr = realloc(ptr, new_size * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        exit(1);
    }
    free(ptr);
    return 0;
}