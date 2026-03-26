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
 * 4. Faça um programa em C que leia do usuário um valor e analise suas propriedades, seguindo as
 * regras abaixo:
 * (a) O programa deve verificar se a entrada e um número válido. Caso contrário, exiba uma
 * mensagem de erro e peça a entrada novamente.
 * (b) Após validar a entrada, o programa deve determinar se o número é:
 * – Positivo, negativo ou zero.
 * – Inteiro ou decimal.
 * – Par ou ímpar (caso seja inteiro).
 * (c) Exiba todas as características do número em uma única mensagem formatada.
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
    float valor;
    
    printf("Digite um valor inteiro ou decimal: ");
    //loop para certificar que é um número. 
    //utiliza uma funcionalidade de stdio para limpar a última entrada de dados até "\n", ou também "ENTER".
    
    while(scanf("%f", &valor) != 1){
        printf("Entrada inválida! Digite um número: ");
        while(getchar() != '\n');
    }
    printf("O valor é ");
    
    //checa se o valor é 0, positivo ou negativo.
    
    if(valor == 0){
        printf("zero");
    }
    else if(valor > 0){
        printf("positivo, ");
    }
    else{
        printf("negativo, ");
    }
    
    //se o valor for diferente de 0, checa se é um inteiro ou decimal.
    //se for inteiro, divide por 2 e pega o resto para descobrir se é par ou ímpar
    
    if(valor != 0){
        if(valor == (int)valor){
            printf("e inteiro, ");
            int n = (int)valor;
            if(n % 2 == 0){
                printf("e par.");
            }
            else{
                printf("e ímpar.");
            }
        }
        else{
            printf("e decimal.");
        }
    }
    printf("\n");

    return 0;
}