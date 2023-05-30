#include <stdio.h>
#include <string.h>

int main(void){
	char typing[32];
	char data[3][32] = {"apple","banana","orange"};
	
	int i, k, result;
	
	for(i=0;i<3;i++){
		k = 0;
		while(data[i][k] != '\0'){
			printf("%c",data[i][k]);
			k++;
		}
		printf("\n");
		scanf("%s",typing);
		result = strcmp(data[i], typing);
		if(result == 0){
			printf("OK.\n");
		}else{
			printf("MISS. One more.\n");
			i = i - 1;
		}
	}
	
	printf("Finish. Congratulation.\n");
	
	return 0;
}