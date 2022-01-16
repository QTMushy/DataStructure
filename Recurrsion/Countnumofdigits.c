#include <stdio.h>

/* TODO: Write recursive DigitCount() function here. */
int DigitCount(int n)
{
   
    static int count =0;
    if(n==0)
    {
        return count;

    }
    else
    {
        count++;
        return DigitCount(n/10);
    }
}


int main(void) {
   int num;
   int digits;

   scanf("%d", &num); 
   digits = DigitCount(num);
   printf("%d", digits);
   return 0;
}
