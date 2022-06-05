#include<stdio.h>
int main (){
int i,num,sum=0;
printf("inter a number for num:",num);
scanf("%d",&num);
printf("The natural even numbers are %d:\n",num);
for(i=0;i<=num*2;i=i+2){
printf("%d\n",i);
sum=sum+i;
}
printf("The sum is of all even numbers: %d",sum);
}