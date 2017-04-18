 /*
    20-03-2017 
    lab3-operatory 
    Kisz Mateusz
    */
    
    
int operatory(){

int a=5,b,c,w,j,k,v,z;
float x=0.5,y;


puts("Wybierz:\n\n \n \n 1.mnozenie\n\n 2.potegowanie \n\n 3.Incrementacje\n\n 4.Dekrementacje\n\n 5.kolejnosc operacji\n\n 6.zaprzeczanie wartosic\n\n 7.Operatory wiekszy/mniejszy lub rowny\n\n 8.Konwersje\n\n 9.Operatory logiczne");
 scanf("%d",&v);
 
 
    switch(v){
   case 1:   
        b=6; 
printf(" Wynik mnozenia 5 * 6 =  %d\n\n\n ",w=a*b);
 operatory();
        break;
   case 2: 
        
        printf("Potegowanie cyfra 5^2 %d \n ",a*=a);
 operatory();
        break;
   case 3: 
 printf("Wartosc poczatkowa  %d \n ",a);    
 printf("preInkrementacja %d \n ",++a);
 printf("Inkrementacja %d \n ",++a);
 printf("po Inkrementacja %d \n\n\n ",a);      
 operatory();
        break;     
    case 4: 
 printf("Wartosc poczatkowa  %d \n ",a);    
 printf("preDekrementacja %d \n ",--a);
 printf("Dekrementacja %d \n ",a--);
 printf("po Dekrementacja %d \n\n\n ",a);    
 operatory();
        break;
    case 5: 
         b=5;
         c=4;
 printf("kolejnosc operacji w=1+5*4 %d \n\n\n ",w=1+b*c);
 operatory();
        break;
    case 6: 
 printf("\n zaprzeczenie wartosci innej niz 0: %d \n ",!5);    
 printf("zaprzeczenie 0: %d \n ",!0);
 operatory();
        break;
    case 7: 
         w=1;
 printf("\n czy 1 jest wieksza lub rowne 2  %d \n ",w>=2); 
 printf("czy 1 jest mniejsze lub rowne 2  %d \n ",w<=2); 
 printf("czy 1 jest rowne 2 %d \n ",w==2);
 operatory();
        break;
    case 8: 
         w=10;
         b=5;
         x=0.5;
         k=4;
         j=3;
printf("dzielenie(konwersja) int=int/float %d \n ",w=b/x);  // poprawne  
printf("dzielenie(konwersja) int=float/int %d \n ",w=x/b);   //sciete zera  
printf("dzielenie(konwersja) float=float/int %f \n ",y=x/b);  //poprawne  
printf("dzielenie(konwersja) float=int/int %f \n ",y=k/j);   //rozniez scina zera
 operatory();
        break;
    case 9: 
         w=1;
         a=5;
         b=6;
 printf(" Dla &:\n %d \n ",w=a&b);
 printf(" Dla |:\n %d \n\n\n ",w=a|b);
 operatory();
        break;
       
 default:;
 break;
}

   
  
}

