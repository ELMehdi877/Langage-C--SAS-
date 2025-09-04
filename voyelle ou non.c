#include <stdio.h>
#include <stdlib.h>
int main() {
    char x ;
    printf("donner un caractere : ");
    scanf("%c",&x);
    switch(x){
case 'a':
    printf("le caractere %c est un voyelle",x);
    break;
    case 'e':
    printf("le caractere %c est un voyelle",x);
    break;
    case 'i':
    printf("le caractere %c est un voyelle",x);
    break;
        case 'o':
    printf("le caractere %c est un voyelle",x);
    break;
    case 'u':
    printf("le caractere %c est un voyelle",x);
    break;case 'y':
    printf("le caractere %c est un voyelle",x);
    break;
    default :
    printf("le caractere %c n'est pas un voyelle",x);
    }
return 0;
}
