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
 * Faça um programa em C que receba do usuário a base e os dois lados de um triângulo qualquer e
 * informe se o triângulo é isósceles, escaleno ou equilátero.  
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
    int base, ladoUm, ladoDois;
    
    printf("Digite o valor da base do triângulo: ");
    scanf("%d", &base);
    
    printf("Digite o valor de um lado do triângulo: ");
    scanf("%d", &ladoUm);
    
    printf("Digite o valor do outro lado do triângulo: ");
    scanf("%d", &ladoDois);
    
    // Primeiro checa se é um triângulo equilátero
    // Se não for, checa se é isósceles
    // Em último caso, é um escaleno
    
    if(ladoUm == ladoDois && ladoUm == base){
        printf("O triângulo é: Equilátero");
    }
    else if(ladoUm == ladoDois || ladoUm == base || ladoDois == base){
        printf("O triângulo é: Isósceles");
    }
    else{
        printf("O triângulo é: Escaleno");
    }

    return 0;
}