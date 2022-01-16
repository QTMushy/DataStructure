#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int* ptr = (int*)malloc(sizeof(int));
    scanf("%d",ptr);
    printf("%d",*ptr);

}