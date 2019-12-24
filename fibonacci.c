#include <stdio.h>
int main()
{
    int i = 0, j = 1, next;
    printf("Fibonacci Series: %d, %d, ", i,j);
    next = i + j;
    while(next <= 21)
    {
        printf("%d,",next);
        i = j;
        j = next;
        next = i + j;
    }
    
    return 0;
}
