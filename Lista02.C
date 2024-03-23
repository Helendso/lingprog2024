/*
EXERCÍCIOS DO CAPÍTULO 2
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.
void questao01() {
	 int num, num1, total;
    printf("Digite o primeiro número\n");
    scanf("%d", &num);
    printf("Digite o segundo número\n");
    scanf("%d", &num1);
    total = (num+num1);
	if (total > 10)
    printf("O valor da soma é: %d\n", total);

}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
void questao02() {
	int num, num1,soma, sub, total;
    printf("Digite o primeiro número\n");
    scanf("%d", &num);
    printf("Digite o segundo número\n");
    scanf("%d", &num1);
    total = (num+num1);
	if (total > 20){
	soma = (total + 8);
	printf("O valor da operação é: %d\n", soma);
	}
	if (total <= 20){
	sub = (total - 5);

    printf("O valor da operação é: %d\n", sub);
	}
}

//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".
void questao03() {
	
	int numero, resto;
    printf("Digite um número\n");
    scanf("%d", &numero);
	resto = numero % 3;
    if ( resto == 0)
	{
	printf("É multiplo de 3\n"); }
	else
	{
	printf("Não é multiplo de 3\n"); }
}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void questao04() {
	int numero, resto;
    printf("Digite um número\n");
    scanf("%d", &numero);
	resto = numero % 5;
    if ( resto == 0)
	{
	printf("É divisível por 5\n"); }
	else
	{
	printf("Não é divisível por 5\n"); }
	
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void questao05() {
	int numero, resto, resto1;
    printf("Digite um número\n");
    scanf("%d", &numero);
	resto = numero % 3;
    if ( resto == 0)
	resto1 = numero % 7;
	if ( resto1 == 0)
	{
	printf("É divisível por 3 e 7\n"); }
	else
	{
	printf("Não é divisível por 3 e 7\n"); }

}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void questao06() {
	float salario, prestacao, verificar;
    printf("Digite o valor do salário bruto:\n");
    scanf("%f", &salario);
	printf("Digite o valor da prestação\n");
    scanf("%f", &prestacao);
	 
    if ((salario*0.3)<prestacao)
	{
	printf("Empréstimo não aprovado\n"); }
	else
	{
	printf("Empréstimo aprovado\n"); }

}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void questao07() {
int numero;
    printf("Digite um número\n");
    scanf("%d", &numero);
    if ( numero>20)
	if ( numero<50)
	{
	printf("O número %d está entre 20 e 50\n",numero); }
	else
	{
	printf("O número %d não está entre 20 e 50\n",numero); }
}

//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void questao08() {
	int numero;
    printf("Digite um número\n");
    scanf("%d", &numero);
    if ( numero>20)
	{
	printf("O número %d é maior que 20\n",numero); }
	else if ( numero==20)
	{
	printf("O número %d é igual a 20\n",numero); }
	else if (numero<20)
	{
	printf("O número %d é menor que 20\n",numero); }
}

//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e como ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void questao09() {
	int nascimento, atual, idade;
    printf("Digite o ano de nascimento no formato AAAA\n");
    scanf("%d", &nascimento);
	if (nascimento>1900){
	printf("Digite o ano de atual no formato AAAA\n");
    scanf("%d", &atual);}
	if (nascimento>atual) {
	printf("Dados inválidos!!! \nAno de nascimento não pode ser maior que ano atual\n");}
	else if (atual>1900) {
	idade = (atual-nascimento);
	printf("A idade para o ano informado é:%d \n", idade); }
	else
	{
	printf("O ano informado não é válido\n"); }
	
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void questao10() {
	int num, num1, num2, menor, maior;
	printf ("Digite três numeros inteiros\n");
	scanf("%d %d %d", &num, &num1, &num2);
	 
	 menor=num;
	 maior=num;
	 
	 if(menor>num1)
		menor=num1;
	if(menor>num2)
		menor=num2;
	
	if (maior<num1)
		maior=num1;
	if (maior<num2)
		maior=num2;

	printf("O Menor número é: %d e o Maior número é: %d \n", menor, maior);
	
}

//11. Faça um programa que leia 3 números e imprima o maior deles.
void questao11() {
	
	int num, num1, num2, menor, maior;
	printf ("Digite três numeros inteiros\n");
	scanf("%d %d %d", &num, &num1, &num2);
	
	maior=num;

	if (maior<num1)
		maior=num1;
	if (maior<num2)
		maior=num2;

printf("Maior número é: %d \n",maior);
	
}

//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void questao12() {
	
	int idade;
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);

	if (idade>18)
		printf("É maior de idade.\n");

	if (idade<18)
		printf("É menor de idade.\n");

	if (idade>65)
		printf("É maior de 65 anos.\n");
	
}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void questao13() {


	float prova1, prova2, media;	
	char nome[30];
	
	printf ("Digite o nome: \n");
    scanf( " %30[^\n]" , nome);

	printf("Digite a nota da prova 1:\n");
	scanf("%f", &prova1);

	printf("Digite a nota da prova 2:\n");
	scanf("%f", &prova2);

	media = (prova1+prova2)/2;

	if (media>=7)
		printf("Nome: %s \nProva 1: %.2f \nProva 2: %.2f \nMédia %.2f \nAprovado\n", nome, prova1, prova2, media);
	
	else if (media<3)
		printf("Nome: %s \nProva 1: %.2f \nProva 2: %.2f \nMédia %.2f \nReprovado\n", nome, prova1, prova2, media);
	
	else if (media>3)
		 if(media<7)
		printf("Nome: %s \nProva 1: %.2f \nProva 2: %.2f \nMédia %.2f \nProva Final\n", nome, prova1, prova2, media);
	
	
}

//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void questao14() {
	
	float salario, desconto;
	printf("Informe o salário\n");
	scanf("%f", &salario);

	if (salario<=600)
		printf("Isento\n");

	else if (salario>600 && salario<=1200)
		{desconto=salario*0.2;
		 printf("Para o salário: %.2f o desconto é de: %.2f ", salario, desconto);
		}
    else if (salario>1200 && salario<=2000)
		{desconto=salario*0.25;
		 printf("Para o salário: %.2f o desconto é de: %.2f  ", salario, desconto);
		}
	else if (salario>2000)
		{desconto=salario*0.3;
		 printf("Para o salário: %.2f o desconto é de: %.2f  ", salario, desconto);
}
}

//15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que leia o valor do produto e imprima o valor da venda.
void questao15() {
	
	float produto, total;
	printf("Informe o valor do produto\n");
	scanf("%f", &produto);

	if (produto<20){
		total = (produto*0.45)+produto;
		printf("O valor do produto é: %.2f\n e o valor venda é: %.2f\n", produto, total);
	}
	else if (produto>=20)
		{total=(produto*0.30)+produto;
		 printf("O valor do produto é: %.2f\n e o valor venda é: %.2f\n", produto, total);
		}
    
}
//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
void questao16() {

	int idade;
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);

	if (idade>=5 && idade<=7)
	printf("A sua categoria é a Infantil A\n");

	else if (idade>=8 && idade<=10)
	printf("A sua categoria é a Infantil B\n");

	else if (idade>=11 && idade<=13)
	printf("A sua categoria é a Juvenil A\n");

	else if (idade>=14 && idade<=17)
	printf("A sua categoria é a Juvenil B\n");

	else if (idade>18)
	printf("A sua categoria é a Sênior\n");
	
}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Um vendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//Idade Valor
//Até 10 anos R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos R$400,00
void questao17() {
	
	int idade;
	char nome[30];

		printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	
		printf ("Digite o nome: \n");
    scanf( " %30[^\n]" , nome);

	if (idade<=10)
	printf(" %s, o valor do plano para essa idade é: 30,00\n", nome);

	else if (idade>10 && idade<=29)
	printf(" %s, o valor do plano para essa idade é: 60,00\n", nome);

	else if (idade>29  && idade<=45)
	printf(" %s, o valor do plano para essa idade é: 120,00\n", nome);

	else if (idade>45  && idade<=59)
	printf(" %s, o valor do plano para essa idade é: 150,00\n", nome);

	else if (idade>59  && idade<=65)
	printf(" %s, o valor do plano para essa idade é: 250,00\n", nome);

	else if (idade>65)
	printf(" %s, o valor do plano para essa idade é: 400,00\n", nome);

	
	
}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite um número fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.
void questao18() {

	int opcao;
	printf("Digite o número do mês: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			printf("O mês correspondente ao número digitado é: JANEIRO\n");
			break;
		case 2:
			printf("O mês correspondente ao número digitado é: FEVEREIRO\n");
			break;
		case 3:
			printf("O mês correspondente ao número digitado é: MARÇO\n");
			break;
		case 4:
			printf("O mês correspondente ao número digitado é: ABRIL\n");
			break;
		case 5:
			printf("O mês correspondente ao número digitado é: MAIO\n");
			break;
		case 6:
			printf("O mês correspondente ao número digitado é: JUNHO\n");
			break;
		case 7:
			printf("O mês correspondente ao número digitado é: JULHO\n");
			break;
	    case 8:
			printf("O mês correspondente ao número digitado é: AGOSTO\n");
			break;
		case 9:
			printf("O mês correspondente ao número digitado é: SETEMBRO\n");
			break;
		case 10:
			printf("O mês correspondente ao número digitado é: OUTUBRO\n");
			break;
		case 11:
			printf("O mês correspondente ao número digitado é: NOVEMBRO\n");
			break;
		case 12:
			printf("O mês correspondente ao número digitado é: DEZEMBRO\n");
			break;

		default:
			printf("Opção digitada inválida!\n");
}
}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
void questao19() {
	float ponto1, ponto2, ponto3, menor, medio, maior, media, soma;
	printf ("Digite a pontuação do primeiro arqueiro\n");
	scanf("%f", &ponto1);
	
	printf ("Digite a pontuação do segundo arqueiro\n");
	scanf("%f", &ponto2);
	
	printf ("Digite a pontuação do terceiro arqueiro\n");
	scanf("%f", &ponto3);

	 menor=ponto1;
	 maior=ponto1;
	 media=(ponto1+ponto2+ponto3)/3;
	 soma=(ponto1+ponto2+ponto3);
	if (soma>100)
	{
	if(menor>ponto2)
		menor=ponto2;
	if(menor>ponto3)
		menor=ponto3;
	
	if (maior<ponto2)
		maior=ponto2;
	if (maior<ponto3)
		maior=ponto3;

	if (ponto1!=maior && ponto1!=menor) 
		medio = ponto1;
	
	if (ponto2!=maior&&ponto2!=menor)
		medio = ponto2;
		
		else medio = ponto3;
		
		printf("A pontuação em ordem decrescente é: %.0f %.0f %.0f e a média é: %.2f \n", maior, medio, menor, media);
	}

	else 
		printf("Equipe desclassificada!");


	
}
	



//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldo médio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio
void questao20() {
	
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void questao21() {
	
}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se que umcarro tipo C faz 12 kmcom umlitro de gasolina, um tipo B faz 9 kme o tipo C, 8 kmpor litro.
void questao22() {
	
}

//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
//Prato Sobremesa Bebida
//Vegetariano 180cal Abacaxi 75cal Chá 20cal
//Peixe 230cal Sorvete diet 110cal Suco de laranja 70cal
//Frango 250cal Mousse diet 170cal Suco de melão 100cal
//Carne 350cal Mousse chocolate 200cal Refrigerante diet 65cal
void questao23() {

}

//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dosmotoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe omês em que o emplacamento deve ser renovado.
void questao24() {
	
}

//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados ideais para umpaís do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram classificadas em três grupos. Sabendo-se que a escala utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um programa que possa imprimir intimações de acordo com o índice e a tabela a seguir:
//Índice Indústrias que receberão intimação
//0,3 1º gurpo
//0,4 1º e 2º grupos
//0,5 1º, 2º e 3º grupos
void questao25() {
	
}

int main() {
	const char menu[1000] = "\n================================\n            PROGRAMAS\n================================\n[1]  - Adição\n[2]  - Adição 2\n[3]  - Múltiplo\n[4]  - Múltiplo 2\n[5]  - Múltiplo 3\n[6]  - Crédito\n[7]  - Intervalo\n[8]  - Menor/Maior\n[9]  - Idade\n[10] - Crescente\n[11] - Maior\n[12] - Idade 2\n[13] - Situação Aluno\n[14] - INSS\n[15] - Valor de Venda\n[16] - Natação\n[17] - Plano de Saúde\n[18] - Mês do Ano\n[19] - Arco e Flecha\n[20] - Crédito Especial\n[21] - Biblioteca\n[22] - Consumo Combustível\n[23] - Calorias\n[24] - Emplacamento\n[25] - Intimação\n================================\n";
	printf("%s",menu);
	int opcao;
	printf("Digite a questão a ser executada: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			questao01();
			break;
		case 2:
			questao02();
			break;
		case 3:
			questao03();
			break;
		case 4:
			questao04();
			break;
		case 5:
			questao05();
			break;
		case 6:
			questao06();
			break;
		case 7:
			questao07();
			break;	
		case 8:
			questao08();
			break;	
		case 9:
			questao09();
			break;	
		case 10:
			questao10();
			break;
		case 11:
			questao11();
			break;
		case 12:
			questao12();
			break;
		case 13:
			questao13();
			break;
		case 14:
			questao14();
			break;
		case 15:
			questao15();
			break;
		case 16:
			questao16();
			break;
		case 17:
			questao17();
			break;
		case 18:
			questao18();
			break;
		case 19:
			questao19();
			break;
		case 20:
			questao20();
			break;
		case 21:
			questao21();
			break;
		case 22:
			questao22();
			break;
		case 23:
			questao23();
			break;
		case 24:
			questao24();
			break;
		case 25:
			questao25();
			break;
		
	
		default:
			printf("Opção inválida!");
	}
	
	return EXIT_SUCCESS;
}