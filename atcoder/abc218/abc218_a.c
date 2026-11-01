#include<stdio.h>
#include<string.h>
int main()
{
    char str[7];
    int n,count=0;
    scanf("%d",&n);
    scanf("%s",str);
    for(int i=0;i<7;i++){
        if(i==n-1 && str[i]=='x')
            count++;
    }
    if(count==1)
        printf("No\n");
    else
        printf("Yes\n");
}