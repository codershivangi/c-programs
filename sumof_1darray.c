#include<stdio.h>
 int main(){
    int a[10],i,sum=0;
    for(i=0;i<10;i++){
        printf("\n enter number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        sum=sum+a[i];
 }
 printf("\n sum of array numbers=%d",sum);
 return 0;
 }
 