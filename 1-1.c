#include<stdio.h>

int mymax(int data[]){
	
	int i;
	int max;
	
	max = data[0];
	
	for(i = 1; i < 10; i++){
		if(data[i] > max){
			max = data[i];
		}
	}
	
	return max;
}

int main(void){
	
	int data[]= {41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
	int maxans;
	
	maxans = mymax(data);
	
	printf("The max number is %d.\n", maxans);
	
	return 0;
}