#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//distance entre deux point dant l'espace
int main() {
    float x1,x2,y1,y2,z1,z2,dis;
    printf("donner x1: ");
    scanf("%f",&x1);
    printf("donner x2: ");
    scanf("%f",&x2);
    printf("donner y1: ");
    scanf("%f",&y1);
    printf("donner y2: ");
    scanf("%f",&y2);
    printf("donner z1: ");
    scanf("%f",&z1);
    printf("donner z2: ");
    scanf("%f",&z2);
    dis=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
    printf("la distance entre x et y c'est : %.2f",dis);

return 0;
}
