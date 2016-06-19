#include <stdio.h>
#include <stdlib.h>

double circleS(double rad);
double rectS(int a, int b);
int factorial(int n);
double summa(double d[], int n);

void main(int argc, char *argv[])
{
  double r=0; 
  int    a=0,b=0,i; 
  double data[]={1,2,3,4,5.17};
  
  printf("summa=%g\n",summa(data,5));
  for(i=0;i<5;++i)
    printf("%g  ",data[i]);
  
  printf("Input r:");
  scanf ("%lf",&r);
  printf("s=%g\n",circleS(r));  
  
  printf("Input a,b:");
  scanf ("%d %d",&a,&b);  
  printf("s=%g\n",rectS(a,b)); 
  
  for(i=0;i<15;++i)
    printf("%d  f=%d\n",i,factorial(i));
  
  system("PAUSE");	
}
double summa(double d[], int n)
{
  int i;
  double s;
  
  for(i=0,s=0; i<n; s+=d[i],i++);
  
  d[0]=-100;
  return s;
}
int factorial(int n)
{
   //int res=1;
   //if (n==0) return res;
   //res=n*factorial(n-1);
   //return res; 
   return (n==0)? 1: n*factorial(n-1);
}
double rectS(int a, int b)
{
  if (a<0 || b<0)   return 0;
  return (double)a*b;  
}
double circleS(double rad)
{
  double s=0; 
  if (rad>=0) s=3.1415926*rad*rad; 
  return s;
  //return (rad<0) ? 0 : 3.1415926*rad*rad;
}

