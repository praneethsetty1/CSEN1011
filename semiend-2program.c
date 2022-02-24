

#include<stdio.h>
int main(){
 int n1,n2,n3,n4,total;
 scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
 total=n1+n2+n3+n4;
 if(total%2==0)
 {
  printf("Same colour");
 }
 else
 {
  printf("Different colour");
 }
}
