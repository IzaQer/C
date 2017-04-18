/*
*9.03.2017
Kisz Mateusz
*/


int wskazniki()
{
     int i,n;
     int liczba = 12;
    
     int *wsk =(int*)33;
   
     printf("%d \n",liczba);
     printf("%d \n",wsk);
     printf("%p \n",&liczba);
     printf("%p \n\n",&wsk);
   
   int*wsk2=&liczba;
   
   
   int tab[]={1,2,3,4,5,6,7,8,9,0};
   int *wsk3=&tab[0];
   
   
   puts("\n\nPierwsza petla");
   for(i=0;;i++)
   {
   printf("%d \n",*(wsk3+i));
   if(*(wsk3+i)==0)break;             
   }
   
   
   
   puts("\n\nDruga petla");
    for(i=0;;i++)
   {
   printf("%d \n",*wsk3);
   if(*wsk3)break;
   wsk3++;             
   }
   
   
   
   
 
   
   
   puts("\n\nTrzecia petla");
   
     int (*wsktab)[10];
   int z=sizeof(tab);
   printf("%d \n",z);
    z=sizeof(int*);
   printf("%d \n\n\n",z);
   wsktab=(int(*)[10])tab;
   n=sizeof(*wsktab)/sizeof(int);
   for(i=0;i<n;i++)
   {
   printf("%d\n",(*wsktab)[i]);                
   }
   
   
   puts("\n\nRozmiary");
    z=sizeof(tab);
   printf("%d \n",z);
   int y=sizeof(int*);
   printf("%d \n",y);
   int x=sizeof(float*);
   printf("%d \n",x);
   int v=sizeof(double*);
   printf("%d \n",v);   
   
     
     return 0;
}
