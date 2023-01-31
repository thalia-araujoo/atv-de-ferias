#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	printf("Números pares existentes entre N números\n\n");
	
	int v[10];
	
	for(int i=1; i<=10;i++){
		printf("Digite o número: ");
		scanf("%d", &v[i]);
	}
	
	printf("Os números pares digitados foram:\n");
	
	for(int i=v[9]; i>0; i--){
		if(v[i]%2==0){
			printf("%d\t", v[i]);
		}
	}
	
	return 0;
}
	
	
