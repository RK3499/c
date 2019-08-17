#include <stdio.h>
void main()
{
    int n,i,j,a[20][20],sum=0;
    printf("Rows and Columns are euqal. Enter the any one value: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
          printf("\n");  
        }
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][j]==0)
                {
                    break;
                }
                else
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("Sum is %d",sum);
}
