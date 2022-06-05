#include<stdio.h>
int main (){
int i,num,sum=0;
printf("inter a number for num:",num);
scanf("%d",&num);
printf("The natural odd numbers are %d:\n",num);
for(i=1;i<=num*2;i=i+2){
printf("%d\n",i);
sum=sum+i;
}
printf("The sum is of all odd numbers: %d",sum);
}