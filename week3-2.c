#include <stdio.h>
#include <stdbool.h>
int main(){
    printf("Enter Number : ");
    int a;
    scanf("%d",&a);
    int ans=0;
    for(int i=0;i<=8;i++){
        ans*=10;
        if(a%2==1){
            ans+=1;
            a/=2;
        }
        else{
            a/=2;
        }
    }
    int size=0;
    int k=ans;
    while(k){
        k/=10;
        size++;
    }
    printf("Binary form = ");
    int ch=8-size;
    for(int i=0;i<ch;i++){
        printf("0");
    }
    printf("%d",ans);
}