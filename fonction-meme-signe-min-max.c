#include <stdio.h>
#include <string.h>
//meme signe-min-max
void fun(int a,int b){
    if(a*b>0)
     printf("de meme singe");
    else
    printf("de singe deferent2");
}
int min(int a,int b){ 
    int min =a;
    if(min>b){
    min=b;
    printf("le min est %d",min);}
    else
    printf("le min est %d",min);
}
int max(int a,int b){
    int max =a;
    if(max<b){
        max=b;
    printf("le max est %d",max);}
    else
    printf("le max est %d",max);
}
int main() {
    int a,b,y;
    printf("donner a et b: ");
    scanf("%d%d",&a,&b);
    fun(a,b);
    printf("\n");
    min(a,b);
    printf("\n");
    max(a,b);
    return 0;
}