#include<stdio.h>
int main()
{
   /* int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;*/
    /*int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;*/
    int n,i,j,k;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        for(j=1;j<=n-i;j++){
            printf("  ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
