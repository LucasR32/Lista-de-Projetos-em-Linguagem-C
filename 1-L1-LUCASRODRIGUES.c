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
 * Faça um programa em C que leia do usuário a idade de uma pessoa expressa em anos, meses e
 * dias e escreva essa idade expressa apenas em dias. Considere todos os anos com 365 dias e todos
 * os meses com 30 dias.
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
    int anos,meses,dias,totalDias;
    
    printf("Digite sua idade em anos, meses e dias(use ENTER para separar cada unidade):\n");
    scanf("%d\n", &anos);
    scanf("%d\n", &meses);
    scanf("%d", &dias);
    
    while(anos <= 0 || meses <= 0 || dias < 0){
        printf("Nenhum dos valores pode ser negativo:\n");
        scanf("%d\n", &anos);
        scanf("%d\n", &meses);
        scanf("%d", &dias);
    }
    
    while(meses > 12 || dias > 30){
        printf("Erro: os meses só vão até 12 e dias até 30. Tente novamente:\n");
        scanf("%d\n", &meses);
        scanf("%d", &dias);
    }
    
    totalDias = (anos * 365) + (meses * 30) + dias;
    
    printf("Você tem %d anos, %d meses e %d dias\n", anos, meses, dias);
    printf("No total você tem %d dias de vida", totalDias);
    
    return 0;
}