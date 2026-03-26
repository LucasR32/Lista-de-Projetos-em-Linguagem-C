/* 
 * ---------------------------------------------------------------------------
 * Centro Universitário SENAI São Paulo - Campus Mariano Ferraz - Vila Leopoldina
 * Curso Superior de Tecnologia em Análise e Desenvolvimento de Sistemas
 * 
 * Disciplina: Linguagem de Programação
 * Professor: Caio Vinícius Ribeiro da Silva
 * Aluno(a): Lucas Rodrigues Daniel
 * Data: 22/03/2026
 * 
 * Enunciado do exercício:
 * Faça um programa em C para ler do usuário o número total de eleitores de um município, o
 * número de votos brancos, nulos e válidos. Calcule e exiba o percentual que cada um representa
 * em relação ao total de eleitores.
 * 
 * Observações:
 * - Este código foi elaborado para cumprir os requisitos do exercício em 
 *   questão, aplicando os conceitos aprendidos na disciplina de Linguagem 
 *   de Programação.
 * - O código foi desenvolvido de acordo com as especificações fornecidas 
 *   pelo professor, com base nas práticas recomendadas de desenvolvimento.
 * - Caso haja algum ponto específico a ser discutido sobre o código, ele 
 *   pode ser detalhado nas observações do código abaixo.
 * 
 * ---------------------------------------------------------------------------
 */

#include <stdio.h>

int main()
{
    int votosTotal, brancos, nulos, validos;
    float percBrancos, percNulos, percValidos;
    
    printf("Digite o valor total de eleitores: ");
    scanf("%d", &votosTotal);
    
    printf("Digite o valor de votos brancos: ");
    scanf("%d", &brancos);
    
    printf("Digite o valor de votos nulos: ");
    scanf("%d", &nulos);
    
    printf("Digite o valor de votos válidos: ");
    scanf("%d", &validos);
    
    while(votosTotal <= 0 || brancos + nulos + validos > votosTotal){
        printf("Erro: o valor não pode ser negativo e a soma dos votos brancos, nulos e válidos não pode ser maior que o total de votos!\nEscreva os valores corretamente.\n");
        printf("Total de eleitores: ");
        scanf("%d", &votosTotal);
    
        printf("Votos brancos: ");
        scanf("%d", &brancos);
    
        printf("Votos nulos: ");
        scanf("%d", &nulos);
    
        printf("Votos válidos: ");
        scanf("%d", &validos);
    }
    
    percBrancos = (float)brancos / votosTotal * 100;
    percNulos = (float)nulos / votosTotal * 100;
    percValidos = (float)validos / votosTotal * 100;
    
    printf("O total foi de %d votos. Sendo:\n", votosTotal);
    printf("Brancos: %.2f%%\n", percBrancos);
    printf("Nulos: %.2f%%\n", percNulos);
    printf("Válidos: %.2f%%\n", percValidos);

    return 0;
}