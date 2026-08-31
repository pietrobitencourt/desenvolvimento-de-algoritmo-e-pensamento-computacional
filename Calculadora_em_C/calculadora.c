//Integrantes:
//Bernardo Kopp
//Gabriel Valois
//Piêtro Bittencourt
//Zamorano Fragoso

#include <stdio.h>
#include <math.h>
#define PI 3.14

// Funcao 1
double calcularArea(){
	char opcao;		
	double area;
	
	printf("\n=== CALCULADORA DE AREA ==="); 
	printf("\nEscolha a opcao para calcular a area: \nq - quadrilatero; \nt - triangulo; \nc - circulo; \nl - losango \nDigite: ");
	scanf(" %c", &opcao);
	
	switch(opcao) {
		case 'q': {
			double lado, altura;
			printf("Digite o lado: ");
			scanf("%lf", &lado);
				
			printf("Digite a altura: ");
			scanf("%lf", &altura);
			
			area = lado * altura;
			
			break;
		}
			
		case 't': {
			double base, altura;
			printf("Digite a base: ");
			scanf("%lf", &base);
			
			printf("Digite a altura: ");
			scanf("%lf", &altura);
			
			area = base * altura / 2;
			break;
		}

			
		case 'c': {
			double raio;
			
			printf("Digite o valor do raio: ");
			scanf("%lf", &raio);
			
			area = PI * pow(raio, 2);
			break;
		}
			
		case 'l': {	
			double dMaior, dMenor;
			
			printf("Digite a diagonal maior: ");
			scanf("%lf", &dMaior);
			
			printf("Digite a diagonal menor: ");
			scanf("%lf", &dMenor);
			
			area = dMaior * dMenor / 2;	
			break;
		}
		
		default:
			printf("Opcao Invalida!");
			break;
	}
	
	return area;
}

//Funcao 2
void calcularImc() { 
	double altura, peso, imc; 
	const char *qualificacao;  

	// Entrada de Dados 
	printf("\n=== CALCULADORA DE IMC ==="); 
	printf("\nDigite sua altura em Metros: "); 
	scanf("%lf", &altura); 
	printf("Digite o seu peso em Quilogramas: "); 
	scanf("%lf", &peso); 

	// Cálculo 
	imc = peso / pow(altura, 2); //pow é uma função da math.h para calcular potenciacão 	 

	// Tabela de Verificação 
	if (imc < 18.5){ 
	qualificacao = "Abaixo do Peso Normal"; 
	} else if (imc <= 24.9) { 
		qualificacao = "Peso Normal"; 
	} else if (imc <= 29.9) { 
		qualificacao = "Excesso de Peso"; 
	} else if (imc <= 34.9) { 
		qualificacao = "Obesidade Classe I"; 
	} else if (imc <= 39.9) { 
		qualificacao = "Obesidade Classe II"; 
	} else {  
		qualificacao = "Obesidade Classe III"; 
	} 

	// Resultado 
	printf("\nResultado do IMC: %.2f", imc); 
	printf("\nQualificacao: %s", qualificacao); 
} 

//Funcao 3
void calculadoraSimples() { 
    int operacao; 
    double resultado, a, b; 
    double base, expoente, resultadoPOW; 
	
	printf("\n=== CALCULADORA SIMPLES ==="); 
    printf("\nDigite: \n(1) Soma  \n(2) Subtracao \n(3) Multiplicacao \n(4) Divisao \n(5) Potenciacao\n"); 
    printf("Escolha: "); 
    scanf("%d", &operacao); 

    switch (operacao) { 
        case 1: 
            printf("Digite o primeiro numero: "); 
            scanf("%lf", &a); 

            printf("Digite o segundo numero: "); 
            scanf("%lf", &b); 

            resultado = a + b; 
            printf("O resultado e: %.2f\n", resultado); 
            break; 

        case 2: 
            printf("Digite o primeiro numero: "); 
            scanf("%lf", &a); 

            printf("Digite o segundo numero: "); 
            scanf("%lf", &b); 

            resultado = a - b; 

            printf("O resultado e: %.2f\n", resultado); 
            break;
  
        case 3:
            printf("Digite o primeiro numero: "); 
            scanf("%lf", &a); 
            
            printf("Digite o segundo numero: "); 
            scanf("%lf", &b); 

            resultado = a * b; 

            printf("O resultado e: %.2f\n", resultado); 
            break; 

        case 4: 
            printf("Digite o primeiro numero: "); 
            scanf("%lf", &a); 

            printf("Digite o segundo numero: "); 
            scanf("%lf", &b); 

            if (b == 0) { 
                printf("Erro: Nao eh possivel dividir por zero!\n"); 
            } else { 
                resultado = a / b; 
                printf("O resultado e: %.2f\n", resultado); 
            } 
            break; 

        case 5: 
            printf("Digite a base: "); 
            scanf("%lf", &base); 

            printf("Digite o expoente: "); 
            scanf("%lf", &expoente); 

            resultadoPOW = pow(base, expoente); 

            printf("O resultado e: %.2f\n", resultadoPOW); 
            break;

        default: 
            printf("Opção invalida!\n"); 
            break; 
    } 
} 

//Funcao 4
void conversorTemperatura() { 
	double temperaturaCelsius, temperaturaConvertida; 
	char  opcaoConversor; 

	// Entrada de Dados 
	printf("\n=== CONVERSOR DE CELSIUS PARA KELVIN OU FAHRENHEIT ===\n"); 
	printf("Digite o valor da temperatura inicial: "); 
	scanf("%lf", &temperaturaCelsius); 

	printf("Para qual temperatura deseja converter Fahrenheit[F] ou Kelvin[K]: "); 
	scanf(" %c",&opcaoConversor); 

	// Cálculo 
	if (opcaoConversor == 'K'){ 
		temperaturaConvertida = temperaturaCelsius + 273.15; 
	} else { 
		temperaturaConvertida = (temperaturaCelsius * 1.8) + 32; 
	} 

	//Resultado 
	printf("\nResultado: %.2f\n ", temperaturaConvertida); 
} 

//Funcao 5
void parOuImpar(){ 
	int numero; 

	printf("\n===VERIFICAR PAR OU IMPAR===\n"); 
	printf("Digite um numero: ");
	scanf("%d", &numero); 	 

	//Verificando se o número é par ou ímpar 
	if (numero % 2 == 0) { 
		printf("O numero %d eh PAR. \n", numero); 
	} else { 
		printf("O numero %d eh IMPAR. \n", numero); 
	} 
} 

//Funcao 6
void calcularDesconto() { 
	double valorInicial, valorFinal, desconto; 
	 
	//Entrada de Dados 
	printf("\n=== CALCULADORA DE DESCONTO ==="); 
	printf("\nDigite o valor do produto: "); 
	scanf("%lf", &valorInicial); 

	printf("Digite o valor do desconto em percentual: "); 
	scanf("%lf", &desconto); 

	//Cálculo 
	valorFinal = valorInicial - (valorInicial * desconto/100); 

	//Resultado 
	printf("\nResultado do Valor Final do Produto: %.2f\n", valorFinal); 
} 

//Funcao 7
void numeroMaiorOuMenor() {	
	int x, y;
	
	printf("\n=== QUAL NUMERO EH MAIOR ==="); 
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &x);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	
	if (x > y){
		printf("%d eh maior do que %d", x, y);
	} else if ( y > x) {
		printf("%d eh maior do que %d", y, x);
	} else {
		printf("%d eh igual a %d", y, x);
	}
}

//Funcao 8
void conversorDeUnidades(){ 

	double metros, milimetros, centimetros, decimetros, hectometros, quilometros; 
	
	printf("\n===CONVERSOR DE MEDIDAS===\n"); 
	printf("Digite um valor em metros: "); 
	scanf("%lf", &metros); 

	//Realizando as conversões 
	milimetros = metros * 1000; 
	centimetros = metros * 100; 
	decimetros = metros * 10; 
	hectometros = metros / 100; 
	quilometros = metros / 1000; 

	//Saída dos resultados 
	printf("\nMedidas convertidas: \n"); 
	printf("Milimetros: %.2lf mm\n", milimetros); 
	printf("Centimetros: %.2lf cm\n", centimetros); 
	printf("Decimetros: %.2lf dm\n", decimetros); 
	printf("Hectometros: %.2lf hm\n", hectometros); 
	printf("Quilometros: %.3lf km\n", quilometros); 

} 


int main(){
	int funcao;
	
	printf("Escolha:\n1 para calculadora de area. \n2 para calcular IMC \n3 para calculadora simples. \n4 para conversor de temperatura. \n5 para impar ou par. \n6 para calcular desconto. \n7 para o comparador de valores. \n8 para conversor de unidades \nDigite: "); 
	scanf("%d", &funcao);
	
	switch(funcao) {
		case 1:
			printf("Area: %.2f u.a.", calcularArea());
			break;
		case 2:
			calcularImc();
			break;
		case 3:
			calculadoraSimples();
			break;
		case 4:
			conversorTemperatura();
			break;
		case 5:
			parOuImpar();
			break;
		case 6:
			calcularDesconto();
			break;
		case 7:
			numeroMaiorOuMenor();
			break;
		case 8:
			conversorDeUnidades();
			break;
		default:
			printf("Opcao inalida!");
			break;
	}
	
	printf("Fim do programa!");
	return 0;
}
