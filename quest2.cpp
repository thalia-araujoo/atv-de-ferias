#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	printf("Substituindo os números pares por 1 e os impares por -1\n\n");
	
	int v[10];
	
	for(int i=0; i<10; i++){
		
		printf("Informe o número: ");
		scanf("%d", &v[i]);
		if(v[i]%2==0){
			v[i] = 1;
			
		}else{
			v[i]= -1;
		}
	}
	
	printf("\nOs números foram substituidos por:\n");
	for(int i=0; i<10; i++){
		printf("%d\t", v[i]);
	}
	return 0;
}
