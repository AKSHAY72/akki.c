#include<stdio.h>
int number;   
void main()
{
number=10;
printf("I am in function main. My value is %d\n",number);
fun1();   
fun2();   
}
fun1()
{
number=20;
printf("I am in function fun1. My value is %d",number);
}
fun2()
{
printf("\nI am in function fun2. My value is %d",number);
}

