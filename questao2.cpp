#include <stdio.h>

int main(){
	
	int array[4];
	char entrada[100];
	
	for(int i = 0; i < 4; i++){
		scanf("%d", &array[i]);
	}
	
	for(int i = 0; i < 4; i++){
		scanf("%s", entrada);	
		printf("%c", entrada[array[i]]);
	}
		
	return 0;
}
