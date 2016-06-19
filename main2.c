#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double    n=7,m=0;
  double d;
  char c='!';
  int k;
  
  k = (int) (n/m);
  printf("k=%d\n",k);
  printf("m=%d  n=%d \n",m,n);
  
  if (n==0) m++;     //
  if (!n)   m++;     //2
  if (0==n) m++;     //0
  
  printf("%d \n",~1);
  printf("size=%d \n",sizeof(c));
  
  system("PAUSE");	
  return 0;
}
