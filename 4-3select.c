#include <stdio.h>
#include <time.h>

int main(void){
	
	unsigned long int start;
	unsigned long int end;
	unsigned long int elapsed;
	
	int data[2000];
	int i, j, a, k, min, l;
	
	for(l=0;l<10;l++){
		for(i=0;i<2000;i++){
			data[i] = 2000 - i;
		}
		
		start = clock();
		
		for(i=0;i<1999;i++){
			min = data[i];
			for(j=i+1;j<2000;j++){
				if(min > data[j]){
					min = data[j];
					k = j;
				}
			}
			a = data[i];
			data[i] = data[k];
			data[k] = a;
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