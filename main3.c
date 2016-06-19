#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a=8,b=12,c=18;
  int max=0;

  //max= (max= a>b ? a:b) >c ? max:c;
  max= (a>b) ?   (a>c?a:c)  :   (b>c?b:c) ;
  {
    double a;   
    a+b+8;   
  }
  b=a+printf("max=%d \n",max);
  
  if (b==4) printf("yes");
  else if (b==2) printf("yes");
       else if (b==3) printf("yes");
            else if (b==1) printf("yes");

  b=4;  c=2;
  
  if (b<0 && ++c>0) {  printf("yes\n"); }
  else {  --c; }
  printf("c=%d \n",c); 
   
  switch(b){
     default:printf("bad b\n");break;
     case 0:
     case 1: printf("0-1\n");    break;
     case 3: printf("3\n");    break;
     case 5: printf("5\n");    break;
       
  } 
 

  system("PAUSE");	
  return 0;
}
