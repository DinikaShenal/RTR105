#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0}; // Initialize all elements to 0

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
    }

    // Open the output file
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            fprintf(fp, "'%c' appeared %d times\n", i, count[i]);
        }
    }

    // Close the output file
    fclose(fp);

    return 0;
}
