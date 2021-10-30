#include <stdio.h>

/*Escreva um algoritmo que leia o valor da base e a altura de um retângulo e mostre os resultados:

Perímetro = 2 * (altura + base)
Área = base * altura*/

int main()
{
    float base, altura, perimetro, area;
    
    printf("Informe a medida da base: ");
    scanf("%f",&base);
    
    printf("Informe a medida da altura: ");
    scanf("%f",&altura);
    
    area = base * altura;
    perimetro = 2 * (altura + base);
    
    printf("Área: %.2f", area);
    printf("Perimetro: %.2f", perimetro);

    return 0;
}
