//Prime numbers between a given range

#include <stdio.h>
int main()
{
    int i,j,n,m,prime;
    printf("Enter Lower Range: ");
    scanf("%d",&n);
    printf("Enter Upper Range: ");
    scanf("%d",&m);

    for(j=n; j<m; j++)
    {
        for(i=2; i<=m; i++)
        {
            if(j % i == 0 && j!=2 && j!=i ) //2 is only divisible by 1 and 2 , and every number is divisible by itself
            {
                prime = 0;
                break;
            }
            else
            {
                prime = 1;
            }
            
        }
        if(prime==1)
        {
            printf("%d ",j);
        }
        

    }
return 0;
   
}