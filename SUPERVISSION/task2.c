/*C program to read a file and display its contents.*/
#include <stdio.h>
#include<stdlib.h>

#define MAX_SIZE  32
void main()
{
    //file pointer
    FILE *fp = NULL;
    char readFileData[MAX_SIZE+MAX_SIZE] = {0};
    //open file
    fp = fopen("aticleworld.txt", "r");
    if(fp == NULL)
    {
        printf("Error in opening the file\n");
        exit(1);
    }
    //read file data
    fscanf(fp,"%s",readFileData);
    //Display read data
    puts(readFileData);
    //close the file
    fclose(fp);
    printf("Read file successfully\n");
}