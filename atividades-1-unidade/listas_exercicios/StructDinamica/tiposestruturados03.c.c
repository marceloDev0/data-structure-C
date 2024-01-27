#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float base, altura;
} Ret;

typedef struct {
    float diametro;
} Circ;

Ret retan_Circunscrito(Circ *c, Ret *r); 
Circ circ_Interno(Ret *r);

int main() {
    Circ *c = malloc(sizeof(Circ));
    Ret *r = malloc(sizeof(Ret));

    if (c == NULL || r == NULL) {
        printf("Erro na alocacao!\n");
        exit(1);
    }

    printf("1- Informe o diametro do circulo: ");
    scanf("%f", &c->diametro);

    printf("   Informe a altura do retangulo: ");
    scanf("%f", &r->altura);

    printf("2- Digite a base do retangulo: ");
    scanf("%f", &r->base);


    Ret retCircunscrito = retan_Circunscrito(c, r);
    Circ circInterno = circ_Interno(r);

    printf("1- O maior retangulo circunscrito possivel:\nLargura: %.2f\nAltura: %.2f\n", retCircunscrito.base, retCircunscrito.altura);
    printf("2- O maior circulo interno ao retangulo tem:\nDiametro: %.2f\nRaio:  %.2f\n", circInterno.diametro, circInterno.diametro / 2);

    free(c);
    free(r);

    return 0;
}

Ret retan_Circunscrito(Circ *c, Ret *r) {
    Ret maior;
    
    maior.altura = c->diametro;
    maior.base = r->altura;

    return maior;
}

Circ circ_Interno(Ret *r) {
    Circ circulo;

    circulo.diametro = (r->base < r->altura) ? r->base : r->altura;

    return circulo;
}

