#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum = 1;
    for(int i=1; i<=n; i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("The %dth fibonacci number is %d\n", i, sum);
    }
    return 0;

}