// #include <stdio.h>

// int main() {
//     // Write C code here
// int num1,num2,sum,data;
// ;
// printf("Enter a number1:");
// scanf("%d",&num1);

// printf("Enter a number2: ");
// scanf("%d",&num2);

// printf(" 1 is addition \n 2 is substration \n 3 is multiplication \n 4 is division \n Enter your data: ");
// scanf("%d",&data);

// if(data==1){
//     sum=num1+num2;
//     printf("%d",sum);
// }else if(data==2){

//     sum=num1-num2;
//     printf("%d",sum);

// }else if(data==3){

//     sum=num1*num2;
//     printf("%d",sum);

// }else if(data==4){

//     sum=num1/num2;
//     printf("%d",sum);

// }
//     return 0;
// }


#include <stdio.h>

int main() {
    // Write C code here
int select,choice;

printf(" 1.Mandhi \n 2.Porotta \n 3.Chappathy \n 4.Puttu \n Enter you choice: ");
scanf("%d",&choice);

switch(choice){
    case 1:
    printf("Mandhi");
    break;
    case 2:
    printf("Porotta");
    break;
    case 3:
    printf("Chappathy");
    break;
    case 4:
    printf("Puttu");
    break;
    default : printf("Please enter a valid one");
}
    return 0;
}