#include <stdio.h>
void main()
{
    int n,p;
    printf("Rows and Columns of the diamond array are euqal. Enter the any one value: ");
    scanf("%d",&n);
    p=((n-1)*(n-1))+(n*n);
    printf("Number os possible diamond is %d",p);
}
