#include<stdio.h>
int main()
{
    int num,reversed=0,remainder;
    scanf("%d",&num);
    int isNegative = 0;
    if(num<0){
      isNegative =1;
      num=-num;
    }
    while(num !=0) {
      remainder=num%10;
      reversed = reversed*10+remainder;
      num=num / 10;
    }
    if(isNegative){
        reversed =-reversed;
    }
    printf("%d
",reversed);
    return 0;
}
