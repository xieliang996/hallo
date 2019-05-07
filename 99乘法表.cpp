/*Êä³ö9*9³Ë·¨±í  */ 



#include "stdio.h"
int main( )
{
  int i,j,m;
  for(i =1;i<=9;i++)
    {
    	for(j=1;j<=i;j++)
     {   
        m =i*j;
     	printf("%d*%d=%-2d  ",i,j,m);
     }
  	printf("\n");
    }
} 