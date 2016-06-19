#include <stdio.h>
#include <stdlib.h>

void minMax(int d[], int n, int *pmax, int *pmin);

int main(int argc, char *argv[])
{
  int min=0,max=0;  
  int data[]={3,-6,1,-2,11,7};
  int *p=data;  //int *p=&data[0];
  
  data[2]=21;
  p[2]=21;
  *(data+2)=21;
  *(2+data)=21;
  2[data]=23;
  
  int d2[3][7]={0};
  int (*p2)[7]=d2;
  
  d2[2][6]=1;
  d2+2
  
  minMax(p,6,&max,&min);
  printf("max=%d  min=%d \n",max,min);  
  system("PAUSE");	
  return 0;
}
void minMax(int d[], int n, int *pmax, int *pmin)
{
  int i;
  int min, max;
  
  //проверка
  if (pmax==NULL || pmin==NULL || d==NULL) return;  
  
  //нахождение max & min
  min=max=0[d];
  for(i=0;i<n;i++){
     if (i[d]>max)  max=d[i];
     if (i[d]<min)  min=d[i]; 
  }
  //возврат результатов
  *pmax=max;
  *pmin=min;
}
