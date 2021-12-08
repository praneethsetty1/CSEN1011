# include <stdio.h>   

int main()   
{   
 int i, Num, Sum = 0 ;   
  
 printf("\n Please Enter any number \n") ;   
 scanf("%d", &Num) ;   
 
 for(i = 1 ; i < Num ; i++)   
  {   
   if(Num % i == 0)   
     Sum = Sum + i ;   
  }    

 if (Sum == Num)   
    printf("\n %d is a Perfect Num", Num) ;   
 else   
    printf("\n%d is not the Perfect Num", Num) ;   

return 0 ;   
}