#include <stdio.h>
int sum(int a, int b);
 int main()
{
    int a;
    a = sum(2,5);
    printf("%d",a);
    return 0;
}
int sum(int a,int b)
{
    int result;
    result = a+b;
    return result;
}
