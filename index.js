#include <stdio.h>

int main() {
    // Write C code here
int num1,num2,sum,data;
;
printf("Enter a number1:");
scanf("%d",&num1);

printf("Enter a number2: ");
scanf("%d",&num2);

printf(" 1 is addition \n 2 is substration \n 3 is multiplication \n 4 is division \n Enter your data: ");
scanf("%d",&data);


if(data==1){
    sum=num1+num2;
    printf("%d",sum);
}else if(data==2){
    
    sum=num1-num2;
    printf("%d",sum);
    
}else if(data==3){
    
    sum=num1*num2;
    printf("%d",sum);
    
}else if(data==4){
    
    sum=num1/num2;
    printf("%d",sum);
    
}
    return 0;
}