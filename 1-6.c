#include<stdio.h>
#include<math.h>

double hensachi(double data[]){
	
	int i;
	double ave, hensa, sum, sub, hensachi;
	
	sum = data[0];
	
	for(i=1;i<10;i++){
		sum = sum + data[i];
	}
	
	ave = sum / 10;
	sub = 0;
	
	for(i=0;i<10;i++){
		sub = sub + (data[i] - ave) * (data[i] - ave);
	}
	
	hensa = sqrt(sub / 10);
	
	for(i=0;i<10;i++){
		hensachi = (data[i] - ave) * 10 / hensa + 50;
		printf("No.%3d is %f\n",i+1, hensachi);
	}
}

int main(void){
	
	double data[] = { 59, 72, 98, 77, 85, 86, 34, 84, 61, 45};
	
	hensachi(data);
	
	return 0;
}