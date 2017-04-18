/*
*3.03.2017
Kisz Mateusz
Tablice 
*/

int tablice()
{
    
    int i,z;
    char napis[]={'w','i','t','a','j'};
    int x=sizeof(napis);
    printf("\n\nSize of napis %d",x);
    
    int tabint[10];
    int y=sizeof(tabint);
    printf("\n\nSize of tabint %d \n\n",y);  
    
   
    
    
    printf("Slowo %s\n\n\n",napis);
    
    
    int cyfry[]={1,2,3,4,5,6,7,8,9};
    int tabl[10]={1,2,3,4,5};
    int tabDuza[]={1,2,3,4,5,6,7};
         
         
         int sTabl=sizeof(tabl)/sizeof(int);
         int sCyfry=sizeof(cyfry)/sizeof(int);
         
         puts("Tablica cyfry");
         for(i=0;i<sCyfry;i++)
         {
             printf("%d\n",cyfry[i]);                     
         }
        
        
        puts("Tablica tabl");
         for(i=0;i<sTabl;i++)
         {
             printf("%d\n",tabl[i]);                     
         }
                
        
         
        
         
         int tabInt2[3][3]={1,2,3,4,5,6,7,8,9};
         int tabInt3[][3]={{1,2,3},{4,5,6},{7,8,9}};
         int tabInt4[][3]={1,2,3,4,5,6,7}; 
         
         
         
         
         puts("Tablice dwuwymiarowe");
        for(i=0;i<3;i++)
        {
         for(z=0;z<3;z++)
        printf("%d",tabInt2[i][z]); 
        if(z=2)printf("\n");                  
        }
        
        int sTabInt3=sizeof(tabInt3)/sizeof(int)/3;
        
        puts("\n tablica 3");
        for(i=0;i<sTabInt3;i++)
        {
         for(z=0;z<3;z++)
        printf("%d",tabInt3[i][z]); 
        if(z=2)printf("\n");                  
        }
        
        int sTabInt4=sizeof(tabInt4)/sizeof(int)/3;
        
        puts("\n tablica 4");
        for(i=0;i<sTabInt4;i++)
        {
         for(z=0;z<3;z++)
        printf("%d",tabInt4[i][z]);
        if(z=2)printf("\n");                  
        }
         
         int tabInt5[][4]={{1,2},{4,5},{6,7}};
        
        int sTabInt5=sizeof(tabInt5)/sizeof(int)/4;
        
        
       puts(" \n tablica 5");
        for(i=0;i<sTabInt5;i++)
        {
         for(z=0;z<4;z++)
         printf("%d",tabInt5[i][z]); 
        if(z=3)printf("\n");               
        }
         
}
