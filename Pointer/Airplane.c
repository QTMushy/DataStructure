#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct Airplane
{
    char name[20];
    int cost;
    bool empty;

}Airplane;

Airplane InitAirplane()
{
    Airplane t;
    strcpy(t.name,"empty");
    t.cost=100;
    t.empty=true;
    return t;

}

int main()
{
    Airplane seat = InitAirplane();

    Airplane* ps = NULL;

    ps = (Airplane*)malloc(sizeof(Airplane));

    int* ptr = NULL;

    ptr = &ps->cost;

    printf("%d",*ptr);



}
