  #include<stdio.h>
  void swap (intx,inty){
    int temp;
    temp=x;
    x=y;
    y=temp;
  }
  int a=10;
  int b=15;
  printf("before swap,value of a:%d",a);
  printf("before swap, value of b:%d",b);
  swap(a,b);
  printf("after swap,value of a:%d",a);
  printf("after swap, value of b:%d",b);
  }