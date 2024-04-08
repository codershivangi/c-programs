#include<stdio.h>
 int main(){
     int a[5],i,even=0,odd=0;
     for(i=0;i<5;i++){
        printf("\nEnter Number:");
        scanf("%d",&a[i]);
     }
     for(i=0;i<5;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
     }
     printf("\nTotal Even=%d and total odd=%d",even,odd);
     return 0;
 }