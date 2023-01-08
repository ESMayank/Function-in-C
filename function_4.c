#include <stdio.h>
int number(){
    int i;
    printf("Enter the number\n");
    scanf("%d",&i);
    
    return i;
}
int main()
{int c;
    
   c=  number();
   printf("the number is %d",c);
   return 0;
}