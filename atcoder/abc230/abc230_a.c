#include<stdio.h>

int main(){

    int n;

    scanf("%d",&n);

    if(n>41)

        printf("AGC%03d",(n+1));

    else

        printf("AGC%03d",n);

}