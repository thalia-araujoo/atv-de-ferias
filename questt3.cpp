#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	printf("\t Ler 10 n�meros inteiros e imprimir os n�meros pares de tr�s para frente\nn\n");
	
	int v[10];
	
	for(int i=0; i<10; i++){
		printf("Informe os valores: ");
		scanf("%d", &v[i]);
		
	}
	printf("\t\tValores pares de tr�s para frente.\n");
	
	for(int i=9; i<0; i--){
		if(v[i] % 2 == 0){
			
			printf("%d", v[i]);
		}
	}
	
	return 0;
}
	
	
	
	
