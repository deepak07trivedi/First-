#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,n,i,sum=0;
printf("Enter the no of nos ");
scanf("%d",&n);
printf("enter %d nos",n);
p=(int*)malloc (n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
sum+=(*p+i);
}
printf("sum is %d",sum);
return 0;
}
