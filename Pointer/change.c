#include<stdio.h>
#include<string.h>


void centsToChange(int cents,int* dollar,int* nickel,int* dime)
{
    *dollar = cents/100;
    *dime = (cents%100)/10;
    *nickel = ((cents%100)%10)/5;
}
int main()
{
    char input[]="hello my name!!!!! is shub!am m!lhotra na name";

    char* stringPos = NULL;

    stringPos = strstr(input, "na");
    int count = 0;

    while(stringPos != NULL)

    { 
          count++;
        
        stringPos = strstr(stringPos+1, "na");
      

        

   }


   printf("%d",count);





}