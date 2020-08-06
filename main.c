#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int a,b;
    for (a=0; a<6; ++a) {
        for (b=0; b<=a; ++b) {
            printf("01");
        }
        printf("\n");
    }
    return 0;
}

//char name[30];
//printf("Hey pal!What is your name?\n\n\n");
//scanf("%s",name);
//printf("Welcome to our grocerry store %s.\n\n",name);
//printf("Here are the list of items we have in our store with their respective prices.\n\n");
//int lays = 20;
//int kurkure = 20;
//int chips = 25;
//int pepsi = 30;
//printf("a:lays= %d rupees\nb:kurkure= %d rupees\nc:chips= %d rupees\nd:pepsi= %d rupees\n",lays,kurkure,chips,pepsi);
//printf("\n\nWrite the quantity of each item you want from us in order. If you dont want to have a particular item, you can put the value 0 to it.\n");
//int a;
//int b;
//int c;
//int d;
//printf("lays:\n");
//scanf("%d",&a);
//printf("kurkure:\n");
//scanf("%d",&b);
//printf("chips:\n");
//scanf("%d",&c);
//printf("pepsi:\n");
//scanf("%d",&d);
//printf("Here is the total bill you have to pay.\n");
//int amount;
//amount = (20*a)+(20*b)+(25*c)+(30*d);
//printf("%d rupees\n",amount);
//printf("\n\nHave a great day %s.Have fun.\n",name);
//printf("\n\nSee you soon.\n");
//
//int i = 10;
//   if(i>15)
//   {
//       printf("10 is greater than 15");
//   }
//   else
//   {
//       printf("10 is less than 15");
//   }
//
//   printf("I am not in if");

//int n = 100;
//    printf("%s",n>90?"Grade A":(n>80?"Grade B":(n>60?"Grade C":(n>40?"Grade D":"Grade F"))));

//printf("Enter the marks of the student:");
//int marks = 0;
//scanf("%d",&marks);
//if(marks>=85 && marks <=100 )
//{
//    printf("\nGrade A\n");
//}
//else if(marks>=70 && marks<=84)
//{
//    printf("\nGrade B\n");
//}
//else if(marks>=55 && marks<=69)
//{
//    printf("\nGrade C\n");
//}
//else if(marks>=40 && marks<=54)
//{
//    printf("\nGrade D\n");
//}
//else if (marks>=0 && marks<=39)
//{
//    printf("\nGrade F\n");
//}
//else
//{
//    printf("Invalid input.\n");
//    printf("Please enter correct marks.\n");
//}

//printf("Pick an item.\n1.pen\n2.pencil\n3.eraser\n4.book\n");
//int choice=0;
//scanf("%d",&choice);
//switch (choice) {
//    case 1:
//        printf("You have picked pen.\n");
//        break;
//    case 2:
//        printf("You have picked pencil.\n");
//    case 3:
//        printf("You have picked eraser.\n");
//    case 4:
//        printf("You have picked book.\n");
//    default:
//        printf("Invalid input.\n Enter correct value.\n");
//        break;
//}

 //printf("Enter a number between 1 and 5.You will get the food item you want to eat and its price.\n");
//   int choice = 0;
//   scanf("%d",&choice);
//   switch (choice) {
//       case 1:
//           printf("Food item - Pasta\nPrice - Rs 179\n");
//           break;
//       case 2:
//           printf("Food item - Pizza\nPrice - Rs 239\n");
//           break;
//       case 3:
//           printf("Food item - Burger\nPrice - Rs 129\n");
//           break;
//       case 4:
//           printf("Food item - Sandwich\nPrice - Rs 149\n");
//           break;
//       case 5:
//           printf("Food item - French Fries\nPrice - Rs 99\n");
//           break;
//       default:
//           printf("Invalid input.\nPlease enter a valid input.\n");
//           break;
//   }

// int i,j;
//for(i=0; i<5; ++i)
//{
//    for (j=0; j<=i; ++j)
//    {
//        printf("*");
//    }
//    printf("\n");
//}
//return 0;

// int i,j,n;
//    printf("Enter number of rows:");
//    scanf("%d",&n);
//    for (i=0; i<n; ++i) {
//        for (j=0; j<i; ++j) {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    return 0;

//int i=0;
//    i=0;
//    while (i<10) {
//        printf("%d\n",i);
//        i++;
//    }

// int a=10;
//    while (a<15) {
//        printf("Value of a:%d\n",a);
//        ++a;
//    }

 //int i=0;
//    i=1;
//    do{
//        printf("%d\n",i);
//        ++i;
//    }while (i<=10);

//    int a,sum = 0;
//    do
//    {
//        printf("Enter a number to add,enter 0 to finish adding:");
//        scanf("%d",&a);
//        sum+=a;
//    }
//    while (a !=0);
//    printf("Sum =%d\n",sum);
//    return 0;

 //int i,j;
//    for (i=0; i<3; ++i) {
//        printf("\ni=%d\n",i);
//        for (j=0; j<3; ++j) {
//            printf("j=%d\n",j);
//
//        }
//    }

//int i=0;
//int marks=0;
//for (i=0; i<=9; i++) {
//printf("Enter the marks of the student: ");
//scanf("%d",&marks);
//    if (marks>=80 && marks<=100) {
//        printf("Grade A\n");
//    }
//    else if(marks<80 && marks>=60){
//        printf("Grade B\n");
//    }
//    else if (marks>=0 && marks<60){
//        printf("Grade C\n");
//    }
//    else{
//        printf("You have entered an invalid input.\nPlease check the marks properly.\n");
//    }
//}
