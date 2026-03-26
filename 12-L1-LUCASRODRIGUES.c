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
 * Escreva um programa em C que calcule o tempo total de pena que um réu deverá cumprir,
 * considerando os seguintes fatores:
 * (a) O usuário deve informar a pena-base em anos. O programa deve validar a entrada para
 * garantir que seja um número positivo. Caso contrário, solicite a entrada novamente.
 * (b) O tempo total da pena será ajustado conforme as seguintes circunstâncias atenuantes ou
 * agravantes:
 *
 * Condição | Ajuste na Pena
 * Réu primário | Reduçãao de 1/3
 * Confissão espontânea | Redução de 1/6
 * Reincidencia | Aumento de 1/2
 * Crime cometido com violência ou grave ameaça | Aumento de 1/3
 *
 * (c) O programa deve permitir que o usuário informe quais dessas condições se aplicam ao caso.
 * (d) Ao final, o programa deve exibir o tempo total da pena ajustada em anos e meses.
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
    float pena = 0.0;
    char primario, confissao, reincidencia, violencia;
    int anos, meses;
    
    printf("Digite o tempo da pena-base do réu em anos: ");
    scanf("%f", &pena);
    
    // Checa se a pena é menor ou igual à 0.
    while(pena <= 0){
        printf("Erro: a pena deve ser um número positivo maior que zero. Digite novamente: ");
        scanf("%f", &pena);
    }
    
    // Questionário de condições.
    printf("\nO réu é primário? (S/N): ");
    scanf(" %c", &primario);
    
    printf("\nO réu fez confissão espontânea? (S/N): ");
    scanf(" %c", &confissao);
    
    printf("\nO réu é reincidente? (S/N): ");
    scanf(" %c", &reincidencia);
    
    printf("\nO réu praticou violência ou grave ameaça durante o crime? (S/N): ");
    scanf(" %c", &violencia);
    
    // Cálculos para definir a pena final.
    if(primario == 'S' || primario == 's'){
        pena = pena * (2.0 / 3.0);
    }
    if(confissao == 'S' || confissao == 's'){
        pena = pena * (5.0 / 6.0);
    }
    if(reincidencia == 'S' || reincidencia == 's'){
        pena = pena * 1.5;
    }
    if(violencia == 'S' || violencia == 's'){
        pena = pena * (4.0 / 3.0);
    }
    
    // Conversão da pena em anos e meses
    anos = (int)pena;
    meses = (int)((pena - anos) * 12 + 0.5);
    
    printf("Tempo total da pena: %d anos e %d meses\n", anos, meses);

    return 0;
}