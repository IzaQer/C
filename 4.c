 /*
    27-03-2017 
    lab3-operatory 
    Kisz Mateusz
    */
    
    
    
    int a=2,b=5,c=7,i;
    
    int petle()
{
    //U¿ycie go to 
    puts("Petla for");
    for(i=1;i<9;i++)
    {
       printf("%d  \n",i);
       if(i==5)goto koniec;               
    }

koniec: printf("Petla for zakonczona przy i=5 przy uzyciu goto");


    printf("\n\n"); 
    puts("Petla while");            
    while(a<10)
    {
       a++;
       printf("a=%d \n",a-2);
       if(a==8)break;
       
    }       
        
printf("\n\n"); 

    do 
    {
       printf("Pokazanie dzialania petli do-while");
    } while (b==6);
       
printf("\n\n"); 


puts("Petla for, wykorzystanie continue");
    for(i=1;i<100;i++)
    {
       printf("%d  ",i);
       if(i>20)continue;
       printf("i");               
    }
        


return 0;
}
