#include<stdio.h>

double mymean(double data[]){
	
	int i;
	double average, sum;
	
	sum = data[0];
	
	for(i=1;i<10;i++){
		sum = sum + data[i];
	}
	
	average = sum / 10;
	
	return average;
}

int main(void){
	
	double data[] = {38.1, 14.2, 51.3, 5.4, 12.5, 39.6, 27.7, 19.8, 81.9, 62.1};
	double ave;
	
	ave = mymean(data);
	
	printf("%f\n",ave);
	
	return 0;
}