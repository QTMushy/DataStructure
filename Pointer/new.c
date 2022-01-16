#include <stdio.h>

typedef struct Data_struct {   
 int a; 
 int b; 
} Data;
 
void AddData(Data obj) { 
 obj.a = obj.a + 5; 
 obj.b = obj.b + 10; 
 printf("a = %d b = %d\n " , obj.a , obj.b); 
}
 
int main(void) { 
 Data point; 
 
 point.a = 10; 
 point.b = 20; 
 AddData(point); 
 
 return 0;
}