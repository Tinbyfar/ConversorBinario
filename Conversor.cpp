#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//fun�ao p converter decimal p binario
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

//fun�ao pra converter binario p decimal
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
	printf("Escolha a convers�o:\n\n");
	printf("1 - Decimal para Bin�rio\n");
	printf("2 - Bin�rio para Decimal\n");
	printf("Digite sua escolha: ");
	scanf("%d", &escolha);
	
	if (escolha == 1) {
		int numero;
		char binario[32]; //array para armazenar o numero binario
		printf("Digite um n�mero decimal: ");
		scanf("%d", &numero);
		decimalParaBinario(numero, binario);
		printf("Bin�rio: %s\n", binario);
	} else if (escolha == 2) {
		char binario[32];
		printf("Digite um n�mero bin�rio: ");
		scanf("%s", binario);
		int resultado = binarioParaDecimal(binario);
		if (resultado != -1) {
			printf("Decimal: %d\n", resultado);
		}
	} else {
		printf("Op��o Inv�lida!\n");
	}
	
	return 0;
}
