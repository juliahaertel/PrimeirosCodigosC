#include <stdio.h>
#include <math.h>
/*Escreva um algoritmo que leia o raio de um círculo e mostre na tela a sua área e o seu perímetro.
Use as fórmulas: A = πr² e P = 2πr.*/

int main()
{
    float raio, area, perimetro;
    
    printf("Informe a medida do raio: ");
    scanf("%f",&raio);
    
    area = 3.14*(raio*raio);
    perimetro = 2*3.14*raio;
    
    printf("Área: %.2f", area);
    printf("Perimetro: %.2f", perimetro);

    return 0;
}
