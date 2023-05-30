#include <stdio.h>
#include <time.h>

int main(void){
	
	unsigned long int start;
	unsigned long int end;
	unsigned long int elapsed;
	
	int data[2000];
	int i, j, a, k;
	
	for(k=0;k<10;k++){
		for(i=0;i<2000;i++){
			data[i] = 2000 - i;
		}
		
		start = clock();
		
		for(i=0;i<1999;i++){
			for(j=1999;j>i;j--){
				if(data[j]<data[j-1]){
					a = data[j];
					data[j] = data[j-1];
					data[j-1] = a;
				}
			}
		}
		
		end = clock();
		
		elapsed = end - start;
		
		printf("START TIME: %lu\n",start);
		printf("END TIME: %lu\n",end);
		printf("ELAPSED TIME: %lu\n",elapsed);
		printf("\n");
	}
	
	return 0;
}