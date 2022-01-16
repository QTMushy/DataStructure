#include<stdio.h>

int binsearch(int arr[],int start,int end,int item)
{
    int mid = (start + end)/2;
    if(start>end)
    {
        return -1;
    }
    if(arr[mid]==item)
    {
        return mid;
    }
    else
    {
        if(arr[mid]>item)
        {
            end = mid-1;
            return binsearch(arr,start,end,item);
        }
         else if(arr[mid]<item)
        {
            start = mid+1;
            return binsearch(arr,start,end,item);
        }
    }
}


int main()
{
    int arr[] = {1,4,5,6};
    int start = 0;
    int end = 3;
    printf("%d",binsearch(arr,start,end,4));
}