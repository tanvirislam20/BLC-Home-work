#include<stdio.h>
int main (){
int i,j,n,count;
printf("The prime numbers from 1 to 200 is:\n\n");
for(i=1;i<=200;i++){
count=0;
for(j=1;j<=i;j++){
if(i%j==0){
count++;
}
}
if(count==2){
printf("%d\n",i);
}
}
return 0;
}