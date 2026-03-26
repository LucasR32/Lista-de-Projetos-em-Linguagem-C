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
 * Crie um programa em C que peça ao usuário um número inteiro n e calcule a soma de todos os
 * números pares de 1 até n. Utilize o laço for para percorrer os numeros de 1 até n e verificar se
 * são pares.
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
    int n, soma = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    // Loop para descobrir quais são os pares entre 1 e n.
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            soma += i;
        }
    }
    
    printf("A soma dos números pares de 1 até %d é igual à: %d\n", n, soma);

    return 0;
}