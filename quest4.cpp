#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	printf("N�meros pares existentes entre N n�meros\n\n");
	
	int v[10];
	
	for(int i=1; i<=10;i++){
		printf("Digite o n�mero: ");
		scanf("%d", &v[i]);
	}
	
	printf("Os n�meros pares digitados foram:\n");
	
	for(int i=v[9]; i>0; i--){
		if(v[i]%2==0){
			printf("%d\t", v[i]);
		}
	}
	
	return 0;
}
	
	
