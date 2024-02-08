#include <stdio.h>

void main()
 {
    FILE *fp;
    char data[50];

    fp = fopen("append.txt", "a");

    printf("Enter data to be appended into file: ");
    gets(data);

    fprintf(fp, "%s", data);
    printf("Data appended to file successfully.\n");

    fclose(fp);

}