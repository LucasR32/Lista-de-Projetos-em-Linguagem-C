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
 * Desenvolva um programa em C que leia do usuário as notas P1, LI e P2 de um aluno. Calcule a
 * média M considerando os pesos P1 (30 %), LI (30 %) e P2 (40 %), imprima o resultado e informe
 * se o aluno esta aprovado ou não, considerando média maior que 50.
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
    float p1, l1, p2, media;
    
    printf("Digite a nota para P1: ");
    scanf("%f", &p1);
    
    printf("Digite a nota para L1: ");
    scanf("%f", &l1);
    
    printf("Digite a nota para P2: ");
    scanf("%f", &p2);
    
    media = p1 * 0.3 + l1 * 0.3 + p2 * 0.4;
    
    printf("A média é de: %.0f\n", media);
    
    if(media > 50){
        printf("O aluno está aprovado\n");
    }
    else{
        printf("O aluno está reprovado\n");
    }

    return 0;
}