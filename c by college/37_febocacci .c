#include <stdio.h>
int main()
{
    printf("enter limit :");
    int n, first, second, next;
    first = 0;
    second = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}
