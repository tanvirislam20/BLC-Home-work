#include<stdio.h>
int main()
{
int i,j,n,s=0;
printf("Choose the height of the pyramid to see the numbered pyramid:");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("\n");
for(j=1;j<=i;j++){
s=s+1;
if(s/10==0){
printf("%d  ",s);
}
else
{
printf("%d ",s);
}
    }
    }
    return 0;
}