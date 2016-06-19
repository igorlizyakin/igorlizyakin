#include <stdio.h>
#include <stdlib.h>

#define BEGIN {
#define END )
#undef END

#define END }
#define START int main(
#define PAUSE system("PAUSE");



START int argc, char *argv[])
BEGIN
  double d=0;  
    
  printf("Hello");
  PAUSE	
  return 0;
END
