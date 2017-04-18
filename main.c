#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int temat;
   puts("Podstawy Programowania.\n\n Wybierz z dostepnych tematow z czego chcesz sporzystac: \n 1.Wielkosci typow danych. \n 2.Sprawdzanie granicznych wielokosci typow danych.\n 3.Operatory\n 4.Petle\n 5.tablice\n 6.Wskazniki");
  scanf("%d",&temat);
  
  switch(temat){
   case 1:   
        printf("\n\n");
        wielkosci();
        break;
   case 2:
        printf("\n\n"); 
        wartosci();
        break;
   case 3:
        printf("\n\n"); 
        operatory();
        break;
   case 4:
        printf("\n\n"); 
        petle();
        break;
   case 5:
        printf("\n\n"); 
        tablice();
        break;
   case 6:
        printf("\n\n"); 
        wskazniki();
        break;
}
    
    
    
    
  
  
  system("PAUSE");	
  return 0;
}
