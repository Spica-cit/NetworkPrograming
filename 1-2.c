#include<stdio.h>

int mysum(int data[]){
	
	int i;
	int sum;
	
	sum = 0;
	
	for(i = 0; i < 10; i++){
		sum = sum + data[i];
	}
	
	return sum;
}

int main(void){
	
	int data[] = {41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
	int sumans;
	
	sumans = mysum(data);
	
	printf("These number's sum is %d.\n", sumans);
	
	return 0;
}