#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    FILE *fptr;

    if ((fptr = fopen("program.txt", "r")) == NULL) {
        printf("Error opening file!");
        
        // Program exits if the file pointer returns null.
        exit(1);
    }

    fscanf(fptr, "%d", &num);

    printf("Value of n = %d", num);
    fclose(fptr);

    return 0;
}