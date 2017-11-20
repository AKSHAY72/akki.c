#include<stdio.h>

int main()

{
int frist,secound,*p,*q,sum;

printf("Enter two integers to add\n");
scanf("%d%d",&frist,&secound);

p=&frist;
q=&secound;


sum=*p+*q;

printf("sum of entered numbers=%d\n",sum);

return 0;
}
