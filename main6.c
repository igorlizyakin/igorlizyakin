#include<math.h>

#include<stdio.h>
#include<stdio.h>
#include<stdio.h>

#include"stdlib.h"

//#define NWINDOWS
#define SIZE 10
#define CUBE(a) ((a)*(a)*(a))
#define SWAP(a,b) do{double a##b=a;a=b;b=a##b;}while(0)

void main(void)
{ 
  int    i,j;
  int    min; 
  double sr; 
  int    data[SIZE]={1,2,3};
  
  double tmp=5, d2=-7;
  //if (1) SWAP(tmp,d2);
  //else   printf("!");
  SWAP(tmp,d2);
  printf("%g %g \n", tmp,d2);
  
  #ifdef   WINDOWS 
    printf("Windows \n");
  #else
    printf("! Windows \n");
  #endif
  
  //int m=1;
  //CUBE(++m);
  //printf("%d \n",m);
  
  //создание массива 
  srand(time(NULL));
  for(i=0; i<SIZE; ++i)
  {
     data[i]=rand()%1000;
     //printf("%d ",data[i]);
  }
  
  //поиск минимума
  min=data[0];
  for(i=0; i<SIZE; ++i)
  {
     if (data[i]<min) min=data[i];  
  }
  printf("min=%d \n",min);
  
  //поиск среднего
  sr=0;
  for(i=0; i<SIZE; sr+=data[i], ++i);
  sr=sr/SIZE;
  printf("sr=%g \n",sr);
  
  //сортировка
  int n;
  for(i=1; i<SIZE-1; ++i)
  {
     for(j=0,n=0; j<SIZE-i; ++j) 
     {
        if (data[j+1]<data[j]) 
        {
           int tmp=data[j];
           data[j]=data[j+1];
           data[j+1]=tmp; 
           n=1;                   
        }
     } 
     if (n==0) break;
  }
  
  //печать массива
  printf("\n\n");
  for(i=0; i<SIZE; ++i) printf("%3d ",data[i]);
  
  system("PAUSE");	
  return;
}
