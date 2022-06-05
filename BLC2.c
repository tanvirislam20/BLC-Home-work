#include<stdio.h>
#include<math.h>
main (){
int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
printf("inter 10 integer number\n");
printf("inter a number for num1:",num1);
scanf("%d",&num1);
printf("inter a number for num2:",num2);
scanf("%d",&num2);
printf("inter a number for num3:",num3);
scanf("%d",&num3);
printf("inter a number for num4:",num4);
scanf("%d",&num4);
printf("inter a number for num5:",num5);
scanf("%d",&num5);
printf("inter a number for num6:",num6);
scanf("%d",&num6);
printf("inter a number for num7:",num7);
scanf("%d",&num7);
printf("inter a number for num8:",num8);
scanf("%d",&num8);
printf("inter a number for num9:",num9);
scanf("%d",&num9);
printf("inter a number for num10:",num10);
scanf("%d",&num10);
float sum;
sum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
printf("The sum is: %.2f\n",sum);
float average;
average=(float)(sum/10);
printf("The average is: %.2f",average);
}