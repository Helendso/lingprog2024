#include <stdio.h>
#include <stdlib.h>


/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q01() {
    printf("Helen");
}
//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q02() {
printf("Resultado: %d\n", 30*27);
}
 
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q03() {
int num1 = 5;
int num2 = 8;
int num3 = 12;
float media = (5+8+12)/3.0;
printf("Media de %d %d %d = %.2f\n", num1, num2, num3, media);
}

//4. Faça um programa que leia e imprima um número inteiro.
void q04() {
    int numero;
    printf("Digite um número inteiro");
    scanf("%d", &numero);
    printf("O número digitado é: %d\n" , numero);
}
//5. Faça um programa que leia dois números reais e os imprima.
void q05() {
    float num1;
    float num2;
    printf("Digite o primeiro número real");
    scanf("%f", &num1);
     printf("Digite o segundo número real");
    scanf("%f", &num2);
printf("Os numeros digitados são: %f, %f\n", num1, num2 );


}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q06() {
    int numero;
    int num1;
    int num2;
    printf("Digite um número inteiro \n");
    scanf("%d", &numero);
    num1 = (numero-1);
    num2 = (numero+1);
    printf("O número digitado é: %d seu antecessor é: %d e seu sucessor é %d\n", numero, num1, num2);

    
}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q07(){
    char nome[50], endereco[50], numero[50];
    printf ("Digite o Nome do Cliente: \n");
    fgets(nome, 50, stdin);
    printf ("Digite o Endereço: \n");
    fgets(endereco, 50, stdin);
    printf ("Digite o Telefone: \n");
    fgets(numero, 50, stdin);
    printf("Nome: %s \n Endereço: %s \n Telefone: %s \n", nome, endereco, numero);
    


}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q08(){
    int num, num1, subtracao;
    printf("Digite o primeiro número\n");
    scanf("%d", &num);
    printf("Digite o segundo número\n");
    scanf("%d", &num1);
    subtracao = (num-num1);
    printf("A diferença entre %d e %d é: %d \n", num, num1, subtracao);
}

//9. Faça um programa que leia um número real e imprima ¼ deste número.
void q09(){
    float num, num1;
    printf("Digite um número \n");
    scanf("%f", &num);
    num1 = (num/4.0);
    printf("¼ de %.2f é: %.2f \n", num, num1 );
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10(){
    int num, num1, num2, media;
    printf("Digite o primeiro número\n");
    scanf("%d", &num);
    printf("Digite o segundo número\n");
    scanf("%d", &num1);
    printf("Digite o terceiro número\n");
    scanf("%d", &num2);
    media = (num+num1+num2)/3.0;
    printf("A média dos números %d, %d e %d é: %d \n", num, num1, num2, media);
}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11(){
    float num, num1, mult, div, soma, sub;
    printf("Digite o Primeiro número \n");
    scanf("%f", &num);
    printf("Digite o Segundo número \n");
    scanf("%f", &num1);
    soma = num+num1;
    sub = num-num1;
    mult = num*num1;
    div = num/num1;
    printf("Os resultados das operações são: \n Adição: %.2f \n Subtração: %.2f \n Multiplicação: %.2f \n Divisão: %.2f \n", soma, sub, mult, div);

}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12() {
    int numero, quadrado;
    printf("Digite um número inteiro");
    scanf("%d", &numero);
    quadrado = numero*numero;
    printf("O quadrado do número digitado é: %d\n" , quadrado);
}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13(){
    float num, num1;
    printf("Digite o valor do saldo: \n");
    scanf("%f", &num);
    num1 = (num*0.02)+num;
    printf("O saldo da poupança é: %.2f\n",num1 );
}
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).
void q14(){
    float num, num1, perimetro, area;
    printf("Digite o valor da base do retângulo: \n");
    scanf("%f", &num);
    printf("Digite o valor da altura do retângulo: \n");
    scanf("%f", &num1);
    perimetro = (num+num1);
    area = (num*num1);
    printf("O perimetro do retangulo é: %.2f e a área é: %.2f\n",perimetro, area );
}
//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void q15(){
    float num, num1, desconto, valor;
    printf("Digite o valor do produto: \n");
    scanf("%f", &num);
    printf("Digite o valor do desconto: \n");
    scanf("%f", &num1);
    desconto = (num1/100)*num;
    valor = (num-desconto);
    printf("O valor do desconto é: %.2f \n O Valor final do produto é: %.2f\n",desconto, valor );
}
//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void q16(){
    float salario, reajuste, salnovo;
    printf("Digite o valor do salário: \n");
    scanf("%f", &salario);
    printf("Digite o valor do reajuste: \n");
    scanf("%f", &reajuste);
    salnovo = (reajuste/100)*salario+salario;
    printf("O Valor do salário atual é: %.2f\n",salnovo);
}

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void q17(){
    float Celsius, Fahrenheit;
    printf("Digite o valor da temperatura em Celsius\n");
    scanf("%f", &Celsius);
    Fahrenheit = (9*Celsius+160) / 5;
    printf("A temperatura em Fahrenheit é:%.2f\n", Fahrenheit);
}
//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.
void q18(){
    float D, T, V, L, distancia, consumo;
    printf("Digite o tempo de viagem em minutos:\n");
    scanf("%f", &T);
    printf("Digite velocidade média:\n");
    scanf("%f", &V);
    distancia = ((T/60.0)*V);
    consumo = distancia/12.0;
    printf("A distância percorrida foi: %.2fKm\n O Consumo foi: %.2f Litros/Km \n", distancia, consumo);
    
    
}

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.
void q20(){
     float dolar, real, cotacao;
    printf("Digite a quantia em Dólar:\n");
    scanf("%f", &dolar);
    printf("Digite o valor atual da cotação do Dólar:\n");
    scanf("%f", &cotacao);
    real = dolar*cotacao;
    printf("O valor da conversão em reais é:%.2f\n", real);
}

int main () {
    q20();
    return EXIT_SUCCESS;
}