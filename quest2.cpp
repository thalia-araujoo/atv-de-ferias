#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	printf("Substituindo os n�meros pares por 1 e os impares por -1\n\n");
	
	int v[10];
	
	for(int i=0; i<10; i++){
		
		printf("Informe o n�mero: ");
		scanf("%d", &v[i]);
		if(v[i]%2==0){
			v[i] = 1;
			
		}else{
			v[i]= -1;
		}
	}
	
	printf("\nOs n�meros foram substituidos por:\n");
	for(int i=0; i<10; i++){
		printf("%d\t", v[i]);
	}
	return 0;
}
