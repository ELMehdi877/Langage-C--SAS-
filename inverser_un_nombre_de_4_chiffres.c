#include <stdio.h>
#include <stdlib.h>
//inverser un nmbr de 4 chiffre
int main() {
   int n,a,b,c,d,inv;
   printf("donner un nombre de quatre chifre : ");
   scanf("%d",&n);
   a=n/1000;
   b=(n-a*1000)/100;
   c=(n-a*1000-b*100)/10;
   d=n-a*1000-b*100-c*10;
   inv=d*1000+c*100+b*10+a;
   printf("le nombre inverser de %d est %d",n,inv);
return 0;
}
