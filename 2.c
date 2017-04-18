#include <stdio.h>
#include <stdlib.h>

 /*
    13-03-2017 
    lab2-przesuniêcia bitowe 
    Kisz Mateusz
    */

int wartosci()
{
int a=1;
    double b=1,p;
    int x,y,v;
    long long int z;
    
    
    puts("wybierz \n \n 1.char\n\n 2.unsigned char \n\n 3.short\n\n 4.unsigned short\n\n 5.long int\n\n 6.unsigned long int  ");
 scanf("%d",&v);
 
 
    switch(v){
   case 1:    
 y= 8*sizeof(signed char);
 z = a<<y-1;
 printf("Maksymalna wartosc to %d \n",z-1);
 printf("Minimalna wartosc to %d\n\n",~z+2);
 wartosci();
        break;
   case 2: x = sizeof(unsigned char);
 y=8*x;
 z = a<<y;
 printf("Maksymalna wartosc to %d \n",z);
 
 wartosci();
        break;
   case 3: x = sizeof(signed short);
 y=8*x;
 z = a<<y-1;
 printf("Maksymalna wartosc to %d \n",z-1);
 printf("Minimalna wartosc to %d\n\n",~z+2);
 wartosci();
        break;     
    case 4: x = sizeof(unsigned short);
 y=8*x;
 z = a<<y;
 printf("Maksymalna wartosc to %d \n",z-1);
 
 wartosci();
        break;
    case 5: x = sizeof(signed long int);
 y=8*x;
 z = a<<y-1;
 printf("Maksymalna wartosc to %d \n",z-1);
 printf("Minimalna wartosc to %d\n\n",~z+1);
 wartosci();
        break;
    case 6: x = sizeof(unsigned long int);
 y=8*x;
 z = a<<y;
  
 printf("Maksymalna wartosc to %llu \n",z-1);
 
 wartosci();
        break;
    
        
        
        
        
 default:;
 break;
}
 
   
  return 0;
}
