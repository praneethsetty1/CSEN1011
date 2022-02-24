#include <stdio.h>
#include<stdio.h>
#include<string.h>
int main(){
struct customer {

char name[15];

int amount;

char mobile_number[10];
}n[2];
for(int x=0;x<2;x++){
scanf("%s",n[x].name);
scanf("%d",&n[x].amount);
if(n[x].amount<0){
printf("Invalid amount");
return 0;
}
scanf("%s",n[x].mobile_number);
if(strlen(n[x].mobile_number)!=10){
printf("Invalid mobile number");
return 0;
}
int y=0;
while(n[x].mobile_number[y]!='\0'){
if(n[x].mobile_number[y]>='0' && n[x].mobile_number[y]<='9')
y+=1;
else{
printf("Invalid entry");
return 0;
}
}

}
int i=n[0].amount+n[1].amount;
printf("Total amount of two customers=%d",i);
}
