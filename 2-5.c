#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int fortune(void){
	int n, m;
	unsigned int seed;
	
	printf("Seed? = ");
	scanf("%d",&seed);
	
	srand(seed);
	
	n = rand() % MAX;
	
	if(n<10){
		m = 0;
	}else if(n<30){
		m = 1;
	}else if(n<65){
		m = 2;
	}else if(n<90){
		m = 3;
	}else{
		m = 4;
	}
	
	return m;
}

int main(void){
	
	int i;
	
	i = fortune();
	
	if(i==0){
		printf("Worst luck\n");
	}else if(i==1){
		printf("Bad luck\n");
	}else if(i==2){
		printf("Good luck\n");
	}else if(i==3){
		printf("Better luck\n");
	}else{
		printf("Excellent luck\n");
	}
	
	return 0;
}