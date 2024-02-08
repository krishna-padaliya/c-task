/*C program to copy contents from one file to another.*/

#include <stdio.h>

void main() {
    FILE *source_fp, *dest_fp;
    char data[50];

    source_fp = fopen("source.txt", "r");
    dest_fp = fopen("dest.txt", "w");

    while(fgets(data, sizeof(data), source_fp) != NULL) {
        fprintf(dest_fp, "%s", data);
    }

    printf("Contents copied from source file to destination file successfully.\n");

    fclose(source_fp);
    fclose(dest_fp);

}