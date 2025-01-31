#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//funçao p converter decimal p binario
void decimalParaBinario (int numero, char *binario) {
	if (numero == 0) {
		strcpy(binario, "0"); // caso especial para 0
		return;
	}
	
	char temp[32] = ""; //array temporario para armazenar o resultado
	int index = 0;
	
	while (numero > 0) {
		temp[index++] = (numero % 2) + '0'; // converte para caractere '0' ou '1'
		numero /= 2;						
	}
	
	//inverter a string pra obter a ordem correta
	int tamanho = index;
	for (int i = 0; i <tamanho; i++) {
		binario[i] = temp[tamanho - 1 - i];
	}
	binario [tamanho] = '\0'; // acaba a string
}

//funçao pra converter binario p decimal
int binarioParaDecimal (const char *binario) {
	int decimal = 0;
	int tamanho = strlen(binario);
	
	for (int i = 0; i < tamanho; i++) {
		if (binario[i] == '1') {
			decimal +- pow(2, tamanho - 1 - i);
		} else if (binario[i] != '0') {
			printf("Erro: Entrada invalida!\n\n");
			return -1;
			}
		}
	
		return decimal;
	
}
	//criando o menu

int main() {
	int escolha;
	printf("Escolha a conversão:\n\n");
	printf("1 - Decimal para Binário\n");
	printf("2 - Binário para Decimal\n");
	printf("Digite sua escolha: ");
	scanf("%d", &escolha);
	
	if (escolha == 1) {
		int numero;
		char binario[32]; //array para armazenar o numero binario
		printf("Digite um número decimal: ");
		scanf("%d", &numero);
		decimalParaBinario(numero, binario);
		printf("Binário: %s\n", binario);
	} else if (escolha == 2) {
		char binario[32];
		printf("Digite um número binário: ");
		scanf("%s", binario);
		int resultado = binarioParaDecimal(binario);
		if (resultado != -1) {
			printf("Decimal: %d\n", resultado);
		}
	} else {
		printf("Opção Inválida!\n");
	}
	
	return 0;
}
