#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ASIZE  700

void testStatic(void);
int cmp1(const void* p1, const void* p2);

int cmp1(const void* p1, const void* p2)
{
    int a= *(int *)p1;
    int b= *(int *)p2;
    return a-b;
}
int cmp2(const void* p1, const void* p2)
{
    return -cmp1(p1,p2);
}

int main(int argc, char *argv[])
{
  int  i;
  double (*pf)(double); 
  //int data[7]={3,1,-7,55,15,7,9};
  int *pdata=NULL;
   
  pf=sin;
  i=printf("sin 90=%g \n",pf(3.1415926/2));

  pdata=(int*)malloc(sizeof(int)*ASIZE);  
  if (pdata==NULL)  return -1;
  // init array
  for(i=0;i<ASIZE;i++) pdata[i]=rand();
  
  qsort(pdata,ASIZE,sizeof(int),cmp2);
  for(i=0;i<ASIZE;i++) printf("%d  ",pdata[i]);
  
  free(pdata); pdata=NULL;
  free(pdata);
  
  testStatic();
  testStatic();
  
  system("PAUSE");	
  return 0;
}
void testStatic(void)
{
    int n=1;
    static int m=1;
    n++;
    m++;
    printf("n=%d  m=%d \n",n,m);
}
