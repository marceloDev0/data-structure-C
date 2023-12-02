#include <stdio.h>
#include <locale.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro){
    *area = (3 * pow(l, 2) * sqrt(3) / 2);
    *perimetro = 6 * l;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    float lado, are, peri;

    printf("Qual é o tamanho do lado do hexágano? ");
    scanf("%f", &lado);

    calcula_hexagono(lado, &are, &peri);

    printf("A área do hexágano %.3f e perímetro %.2f", are, peri);

    return 0;

}