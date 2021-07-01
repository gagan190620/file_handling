#include <stdio.h>
#include <stdlib.h> 
  
int main()
{
    FILE *fptr1, *fptr2,*fp;
    char filename[100], c;
  
    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);
  
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);
  
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
  
    printf("\nContents copied to %s\n\n\n", filename);
  
    fclose(fptr1);
    fclose(fptr2);
    char ch, ch1[300];
	int temp=0,i=0,j=0;
    fptr2 = fopen(filename, "r");
    if(fptr2==NULL)
    {
        printf("Error!!");
        return 0;
    }
    printf("\nInput to reverse function is:\n\n");
    ch = getc(fptr2);
    while(ch != EOF)
    {
        temp++;
        putchar(ch);
        ch1[i] = ch;
        i++;
        ch = getc(fptr2);
    }
    printf("\n\n\n");
    printf("OUTPUT:\n\n");
    for(j=(temp-1); j>=0; j--)
    {
        ch = ch1[j];
        printf("%c", ch);
    }
    fclose(fptr2);
    return 0;
}
