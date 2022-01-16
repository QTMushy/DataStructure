#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "This is shubham website";
   const char s[2] = " ";
   char *token;
   char* val=NULL;
   char ans[80];
   
   /* get the first token */
   
   val = strstr(str,"is");
  

   while(val != NULL)
   {
       printf("1");
       
       val=strstr(val+1,"is");
       

   }


   
   return(0);
}