#include <stdio.h>
#include <math.h>

void bhaskara(float , float , float , float *, float *, float *);

int main(int argc, char const *argv[]){

    float a;
    float b;
    float c;
    float delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("\nDigite o valor de b: ");
    scanf("%f", &b);
    printf("\nDigite o valor de c: ");
    scanf("%f", &c);

    printf("\nValores digitados: A: %.2f, B: %.2f, C: %.2f\n", a, b, c);

    bhaskara(a, b, c, &delta, &x1, &x2);

    if(delta < 0){
        printf("\nResultados:\n");
        printf("\tNão possui raízes reais :(\n");
    } else {
        printf("\nResultados:\n");
        printf("\tX1: %.2f\n", x1);
        printf("\tX2: %.2f\n", x2);
    }
    
    return 0;
}

void bhaskara(float x, float y, float z, float *delta, float *value1, float *value2){

    *delta = pow(y, 2) - 4 * x * z;

    if(*delta == 0){
        *value1 = -y / (2 * x);
        *value2 = *value1;
    } else {
        *value1 = (-y + sqrt(*delta)) / (2 * x);
        *value2 = (-y - sqrt(*delta)) / (2 * x);
    }
}