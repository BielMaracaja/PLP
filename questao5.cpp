#include <stdio.h>

int main(){
	int array[100];
	
	int n;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		
		scanf("%d", &array[i]);
		int band = 0;
		
		for(int j = 0; j < i; j++){
			
			if(array[j] == array[i]){
				
				band = 1;
				break;
			}
			
		}
		if (band == 0){
			printf("%d ", array[i] );
		}
	}
	return 0;
}
