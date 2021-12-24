#include<stdio.h>
int main(){
  int n,rev=0,r,n1;
  printf("enter a three digit number:");
  scanf("%d",&n);
  n1=n;
  
  while(n!=0)
  {
    r=n%10;
    rev=(rev*10)+r;
    n/=10;
  }
  printf ("the reverse number =%d\n",rev);
  
if (n1==rev)
printf("\nthe number is palindrome number");
else
printf("\nthe number is not palindrome number");
}
