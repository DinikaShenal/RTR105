#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void print_occurences(char *s);
 
int main()
{
    char s[] = "abcdefghijklmnopabcdefabcab";
    print_occurences(s);


    return 0;
}

void print_occurences(char *s)
{
    int length = strlen(s) - 1;
    char unique[length];
    int counted = 0;

    // Open the output file
    FILE *fp = fopen("statistics.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
    }    

    for (int i=0; i<length; i++)
    {
        bool already_counted = false;
        for (int j = 0; j < counted; j++)
        {
            if (s[i] == unique[j])
            {
                already_counted = true;
            }
        }
        if (already_counted) continue;

        int count = 0;
        for (int j = 0; j < length; j++)
        {
            if (s[i] == s[j]) count++;
        }
        fprintf(fp,"%c - %d\n",s[i],count);

        unique[counted] = s[i];
        counted++;
    }

    // Close the output file
    fclose(fp);
    

}
