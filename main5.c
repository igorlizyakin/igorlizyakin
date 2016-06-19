#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i=0;
  int num=0,pow2=1;
  
  printf("Intput int:");
  scanf ("%d",&num);
  
  for(i=1,pow2=1; i<=32; ++i)
  {
     //if ((num&pow2)==0) printf("0");
     //else             printf("1");
     printf("%d",(num&pow2)!=0);
     
     if (i%4==0) printf(" ");
     pow2*=2;      
  }
  system("PAUSE");	
  return 0;
}
