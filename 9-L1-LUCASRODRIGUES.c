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
 * Elabore um programa em C que verifique se uma pessoa já pode se aposentar pela regra geral da
 * aposentadoria programada no Brasil. Considere, para este exercício, os seguintes critérios:
 * • mulher: ter no mínimo 62 anos de idade e 15 anos de contribuição;
 * • homem: ter no mínimo 65 anos de idade e 20 anos de contribuição.
 * Dados de entrada:
 * • o nome da pessoa;
 * • o sexo da pessoa (M para mulher ou H para homem);
 * • a idade da pessoa;
 * • o tempo de contribuição em anos.
 * Dados de saída:
 * • o nome da pessoa;
 * • se ela já pode ou não se aposentar;
 * • qual requisito ainda falta cumprir, caso ainda não tenha direito ao benefício.
 * Considere apenas essas regras simplificadas para resolver o exercício.
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
    char nome[50];
    char sexo;
    int idade, tempoContribuicao;
    
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite seu sexo (H - homem / M - mulher): ");
    scanf(" %c", &sexo);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite quantos anos você tem de contribuição: ");
    scanf("%d", &tempoContribuicao);
    
    // Definindo os requisitos para se aposentar.
    int idade_min = 0, contribuicao_min = 0;
    
    // Checagem caso a entrada seja diferente do esperado.
    if(sexo == 'M' || sexo == 'm'){
        idade_min = 62;
        contribuicao_min = 15;
    }
    else if(sexo == 'H' || sexo == 'h'){
        idade_min = 65;
        contribuicao_min = 20;
    }
    else{
        printf("Erro: sexo inválido. Escolha apenas entre M ou H\n");
        return 1;
    }
    
    // Valida se a pessoa tem idade e anos de contribuição suficientes para se aposentar.
    if(idade >= idade_min && tempoContribuicao >= contribuicao_min){
        printf("%s, você já pode se aposentar.\n", nome);
    }
    else{
        printf("%s, você não pode se aposentar.\n"), nome;
        if(idade < idade_min){
            printf("Faltam ainda %d anos de idade.\n", idade_min - idade);
        }
        if(tempoContribuicao < contribuicao_min){
            printf("Faltam %d anos de contribuição\n", contribuicao_min - tempoContribuicao);
        }
    }

    return 0;
}