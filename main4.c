#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i=0;
  
  while(i<256)
  {
     switch(i)
     { 
       case '\a': printf("\\a-%-4d ",i);  break;
       
       default:   printf("%2c-%-4d ",i,i);break;
     }
     if (i==29)  break;
     if (i%9==0) printf("\n");
     i++;
  }
  
  system("PAUSE");	
  return 0;
}
