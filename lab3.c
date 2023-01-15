#include<stdio.h>
float si(float x,float y,float z)
{
    return (x*y*z)/100;
}
int main()
{
   float pri,rate,time;
   printf("Enter the pri:");
   scanf("%f",&pri);
   printf("Enter the rate:");
   scanf("%f",&rate);
   printf("Enter the time:");
   scanf("%f",&time);
   printf("The si is %0.2f\n",si(pri,rate,time));
   return 0;
}