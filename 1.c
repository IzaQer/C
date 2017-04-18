 /*
    06-03-2017 
    lab1-typy danych 
    Kisz Mateusz
    */
int wielkosci()
{
 printf("Sizeof char: %d \n",sizeof(char));
    printf("Sizeof unsigned char: %d \n",sizeof(unsigned char));
    
    printf("Sizeof int: %d \n",sizeof(int));
    printf("Sizeof unsigned int: %d \n",sizeof(unsigned int));
    
    printf("Sizeof long: %d \n",sizeof(long));
    printf("Sizeof unsigned long: %d \n",sizeof(unsigned long));
    
    printf("Sizeof long long: %d \n",sizeof(long long));
    printf("Sizeof unsigned long long: %d \n",sizeof(unsigned long long));
    
    printf("Sizeof short: %d \n",sizeof(short));
    printf("Sizeof unsigned short: %d \n",sizeof(unsigned short));
    
    printf("Sizeof float: %d \n",sizeof(float));
   
    printf("Sizeof double: %d \n",sizeof(double));
    
    printf("Sizeof long double: %d \n",sizeof(long double));
    
    
    
    int liczbaPierwsza=4;
    int liczbaDruga=3;
    
    long long wynik=liczbaPierwsza+liczbaDruga;
    printf("\n \nWynik to: %d \n",wynik);
    
    printf("Sizeof liczbaPierwsza: %d \n\n\n\n\n",sizeof(liczbaPierwsza));   
}
