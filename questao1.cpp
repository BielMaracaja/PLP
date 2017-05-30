#include <stdio.h>

int main(){
	
	int qtdFalhas = 0;

	int teste = 1;
	
	while (teste != 0){
		scanf("%d", &teste);
		if (teste < 0)
			qtdFalhas += 1;
	}
	
	printf("%d", qtdFalhas);
	
	return 0;
}
