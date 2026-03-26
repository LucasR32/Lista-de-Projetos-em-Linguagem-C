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
 * Faça um programa em C que leia 3 valores do usuário (considere que não serão informados
 * valores iguais) e exiba esses valores em ordem crescente.
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
    int primeiro, segundo, terceiro;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiro);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &segundo);
    
    printf("Digite o terceiro valor: ");
    scanf("%d", &terceiro);

    // Caso o primeiro seja o menor
    if(primeiro < segundo && primeiro < terceiro){
        if(segundo < terceiro){
            printf("%d, %d, %d\n", primeiro, segundo, terceiro);
        }
        else{
            printf("%d, %d, %d\n", primeiro, terceiro, segundo);
        }
    }
    // Caso o segundo seja o menor
    else if(segundo < primeiro && segundo < terceiro){
        if(primeiro < terceiro){
            printf("%d, %d, %d\n", segundo, primeiro, terceiro);
        }
        else{
            printf("%d, %d, %d\n", segundo, terceiro, primeiro);
        }
    }
    // Caso o terceiro seja o menor
    else{
        if(primeiro < segundo){
            printf("%d, %d, %d\n", terceiro, primeiro, segundo);
        }
        else{
        printf("%d, %d, %d\n", terceiro, segundo, primeiro);
        }
    }

    return 0;
}
