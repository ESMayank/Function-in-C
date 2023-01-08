#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int a = 2, b=3 , c;
    c = sum( a,  b);
    printf("The value of c is %d",c);
    return 0;
}