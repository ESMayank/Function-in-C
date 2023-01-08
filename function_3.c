#include <stdio.h>
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {for (int j = 0; j < n; j++)
    {
        /* code */printf("%c",'*');
    }
    printf("\n");
        
    }
    
}
void main()
{
    printstar(7);
}