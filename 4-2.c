#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void output(int data[], int size){
	
	int i;
	for(i=0;i<size;i++){
		printf("%d, ",data[i]);
	}
	printf("\n");
}

int main(void){
	
	int data[SIZE];
	int size = SIZE;
	int seed;
	int i, j, a, min, k;
	
	printf("Seed?=");
	scanf("%d",&seed);
	srand(seed);
	
	for(i=0;i<size;i++){
		data[i] = rand()%100+1;
	}
	
	output(data, size);
	
	for(i=0;i<size-1;i++){
		min = data[i];
		k = i;
		for(j=i+1;j<size;j++){
			if(min > data[j]){
				min = data[j];
				k = j;
			}
		}
		a = data[i];
		data[i] = data[k];
		data[k] = a;
	}
	
	output(data, size);
	
	return 0;
}