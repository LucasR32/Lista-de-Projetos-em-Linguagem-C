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
 * Escreva um programa em C que calcule o valor do imposto devido com base na renda anual de
 * um contribuinte, seguindo as regras abaixo:
 * (a) O usuário deve informar sua renda anual. O programa deve validar a entrada para garantir
 * que seja um número positivo. Caso contrário, solicite a entrada novamente.
 * (b) O imposto devido deve ser calculado com base na seguinte tabela de alíquotas progressivas:

 * Faixa de Renda (R$) Alíquota
 * Ate R$ 22.847,76 | Isento (0%)
 * De R$ 22.847,77 ate R$ 33.919,80 | 7,5%
 * De R$ 33.919,81 ate R$ 45.012,60 | 15%
 * De R$ 45.012,61 ate R$ 55.976,16 | 22,5%
 * Acima de R$ 55.976,16 | 27,5%
 * 
 * (c) O imposto deve ser calculado apenas sobre a parcela da renda que se enquadra em cada
 * faixa.
 * (d) O programa deve exibir o imposto total devido e a alíquota efetiva paga pelo contribuinte.
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
    float renda, imposto = 0.0, aliquotaEfetiva;
    
    printf("Digite sua renda anual: ");
    scanf("%f", &renda);
    
    while(renda <= 0){
        printf("Erro: o valor precisa ser positivo. Digite novamente: ");
        scanf("%f", &renda);
    }
    // Faz o cálculo do imposto progressivamente por faixas.
    if(renda <= 22847.76){
        imposto = 0.0;
    }
    else if(renda <= 33919.80){
        imposto = (renda - 22847.76) * 0.075;
    }
    else if(renda <= 45012.60){
        imposto = (33919.80 - 22847.76) * 0.075 + (renda - 33919.80) * 0.15;
    }
    else if(renda <= 55976.16){
        imposto = (33919.80 - 22847.76) * 0.075 + (45012.60 - 33919.80) * 0.15 + (renda - 45012.60) * 0.225;
    }
    else{
        imposto = (33919.80 - 22847.76) * 0.075 + (45012.60 - 33919.80) * 0.15 + (55976.16 - 45012.60) * 0.225 + (renda - 55976.16) * 0.275;
    }
    
    // Calcula a alíquota efetiva caso a renda seja maior que 0.
    if(aliquotaEfetiva > 0){
        aliquotaEfetiva = (imposto / renda) * 100;
    }
    else{
        aliquotaEfetiva = 0;
    }
    
    printf("Imposto total devido: R$%.2f\n", imposto);
    printf("Alíquota efetiva: %.2f%%\n", aliquotaEfetiva);
    
    return 0;
}