#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(int argc, char *argv[])
{
  int n=7,m=-5;
  int *pi=&n;
  void *pv=NULL;
  float *pf=NULL;
  
  printf("size of pointer=%d \n",sizeof(double*));
  printf("%p %p \n",pi,&n);
  ++pi;
  printf("%p \n",pi);
  
  //*pi=5;        //n=5
  //m=*pi;        //m=n
  swap(&n,&m);
  printf("n=%d  m=%d\n",n,m);
  
  if (pf!=NULL) *pf=5;
  
  pi=&n;
  pv=&n;    //
  pf=(float*)&n;
  
  //printf("n=%d \n", *pi);
  //printf("n=%d \n", *(int*)pf);
  //printf("n=%d \n", *(int*)pv);
  
  printf("n=%d \n",*&*&n);
  
  system("PAUSE");	
  return 0;
}
void swap(int *a, int *b)
{
   int tmp;      
   if (a==NULL || b==NULL)  return;
   tmp=*a;          // tmp=n
   *a=*b;           // n = m
   *b=tmp;          // m=tmp
}

