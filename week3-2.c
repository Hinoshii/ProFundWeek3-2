#include <stdio.h>
int main(){
    printf("Enter Number : ");
    int a;
    scanf("%d",&a);
    int b[8]={0,0,0,0,0,0,0,0};
    for(int i=0;i<8;i++){
        if(a%2==1){
            b[i]=1;
            a/=2;
        }
        else{
            b[i]=0;
            a/=2;
        }
    }
    printf("Binary form = ");
    for(int i=0;i<8;i++){
        printf("%d",b[7-i]);
    }
}
