#include<stdio.h>
int main (){
int i,num,sum=0;
printf("inter a number for num:",num);
scanf("%d",&num);
for(i=0;i<=num;i++){
printf("%d\n",i);
sum=sum+i;
}
printf("The sum is: %d",sum);
}