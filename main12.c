#include <stdio.h>
#include <stdlib.h>

int  slen (char *s);
void scopy(char *a, char *b, int n);
char*sadd (char *s1,char *s2);
char*sadd2(char *s1,char *s2);
char*sadd2_s(char *s1,int sizeS1, char *s2);

int main(int argc, char *argv[])
{
  char s1[10];
  char s2[8];  
    
  printf("Input you name:");  
  //scanf ("%s",s1);
  gets(s1);
  printf("%s\n",s1);  
  printf("%d\n",slen(s1));
  
  scopy(s2,s1,8);
  printf("s2=%s\n",s2);
  
  printf("%s\n",sadd2_s(s1,10," abcd"));
  
  system("PAUSE");	
  return 0;
}
char*sadd2_s(char *s1,int sizeS1, char *s2)
{
    int i=0;
    int n1=slen(s1);
    int n2=slen(s2);  
    
    if (n1+n2+1>sizeS1) return s1;
      
    for(i=0;i<=n2;i++)  s1[n1+i]=s2[i];
    return s1;    
}
char*sadd2(char *s1,char *s2)
{
    int i=0;
    int n1=slen(s1);
    int n2=slen(s2);  
      
    for(i=0;i<=n2;i++)  s1[n1+i]=s2[i];
    return s1;
}
char*sadd(char *s1, char *s2)
{
    int i=0;
    int n1=slen(s1);
    int n2=slen(s2);
    char*s3=(char*)malloc(n1+n2+1);
    
    for(i=0;i<n1;i++)   s3[i]=s1[i];
    for(i=0;i<=n2;i++)  s3[n1+i]=s2[i];
    
    return s3;
}
void scopy2(char *a, char *b)
{
    while(*a++=*b++);
}
void scopy(char *a, char *b, int n)
{
   int i=0; 
   if (a==NULL || b==NULL) return;
   
   do {
      a[i]=b[i];
   }while(b[i++]!='\0' && i<n);

   a[n-1]='\0'; 
}
int slen(char *s)
{
   int i=0;
   if (s!=NULL) 
       for( ; s[i]!='\0'; i++);
   return i;
}
