#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr1, *fptr2;
    char sourcefile[50], destinationfile[50], c;
    printf("Enter Source File with Extension: ");
    scanf("%s", sourcefile);
    fptr1 = fopen(sourcefile, "r");
    printf("Enter Destination File with Extension: ");
    scanf("%s", destinationfile);
    fptr2 = fopen(destinationfile, "w");
    c = fgetc(fptr1);
    while (c != EOF)
    {
        if (c > 'A' && c < 'Z')
        {
            fputc(c + 32, fptr2);
            else fputc(c, fptr2);
            c = fgetc(fptr1);
        }
        printf("Copied Successfully");
        return 0;
    }