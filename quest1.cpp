#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	printf("Ordem crescente de 10 números reais\n\n");
	
	float v[10], aux;
	
	for(int i = 0; i < 10; i++){
		printf("Digite o número: ");
		scanf("%f", &v[i]);
	}
	
	for(int i=0; i<10; i++){
		for(int x = i; x < 10; x++){
			if(v[i] > v[x]){
				aux = v[i];
				v[i] = v[x];
				v[x] = aux;
			}
		}
		printf("%.2f\n", v[i]);
	}
	return 0;
}

