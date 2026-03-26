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
 * 3. Faça um programa em C que leia do usuário a idade e a nacionalidade de uma pessoa e determine
 * sua elegibilidade para votar, seguindo estas regras:
 * (a) Apenas cidadãos brasileiros podem votar. Caso contrário, o programa deve exibir a
 * mensagem: ”Você não pode votar, pois não é cidadão brasileiro.”
 * (b) Se a pessoa for brasileira, avalie sua idade conforme as regras abaixo:
 * • Menores de 16 anos: ”Você não pode votar.”
 * • De 16 a 17 anos ou acima de 70 anos: ”O voto é facultativo.”
 * • De 18 a 70 anos: ”O voto e obrigatório.”
 * (c) O programa deve validar a entrada do usuário, garantindo que a idade seja um número
 * positivo e que a nacionalidade seja informada corretamente. Caso contrário, exiba uma
 * mensagem de erro e peça a entrada novamente.
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

int main(){
    int idade,opcaoNacionalidade;
    
    printf("Digite a opção que corresponde à sua nacionalidade (1 - Brasileiro / 2 - Outros): ");
    scanf("%d", &opcaoNacionalidade);
    
    //Valida a nacionalidade
    while(opcaoNacionalidade < 1 || opcaoNacionalidade > 2){
        printf("Selecione uma das opções de nacionalidade (1 - Brasileiro / 2 - Outros): ");
        scanf("%d", &opcaoNacionalidade);
    }
    if(opcaoNacionalidade == 2){
        printf("Você não pode votar, pois não é cidadão brasileiro.\n");
        return 0;
    }
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    //Valida a idade
    while(idade < 0){
        printf("Sua idade não pode ser negativa! Informe sua idade corretamente: ");
        scanf("%d", &idade);
    }
    if(idade < 16){
        printf("Você não pode votar.\n");
    }
    else if(idade <=17 || idade >= 70){
        printf("O voto é facultativo.\n");
    }
    else{
        printf("O voto é obrigatório\n");
    }
    return 0;
}