#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements = 5;
    int *ptr = calloc(num_elements, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for (int i = 0; i < num_elements; i++) {
        ptr[i] = i + 2;
    }
    printf("\n");
    free(ptr);
    return 0;
}