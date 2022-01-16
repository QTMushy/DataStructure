#include<stdio.h>
#include<stdbool.h>
#include<string.h>


void displaytriangle(int n)
{
    static int star=0;
    
    if((2*star)+1>n)
    {
        return;
    }
    else{
        for(int i=0;i<(n/2)-star;i++)
        {
            printf(" ");
        }
        for(int i=0;i<(2*star)+1;i++)
        {
            printf("*");
        }
        star++;
        puts("");
        displaytriangle(n);
    }
}
int isPalindrome(char* str,int end,int start)
{
    if(start==end||start>end)
    {
        return 0;
    }
    else{
        if(str[start]==str[end])
        {
            return isPalindrome(str,end-1,start+1);
        }
        else{
            return 1;
        }
    }


}
int fib(int n, int n1,int n2)
{
    if(n-1==0)
    {
        return n2;
    }
    else{
        int n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        return fib(n-1,n1,n2);
    }
    

}

int main()
{
    //displaytriangle(19);
   printf("%d",fib(6,0,1));
}
