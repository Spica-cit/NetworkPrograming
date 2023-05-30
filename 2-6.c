#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double myvar(double data[], int n){
	double x, y, z, w;
	int i;
	x = 0;
	w = 0;
	
	for(i=0;i<n;i++){
		x = x + data[i];
	}
	
	y = x / n;
	
	for(i=0;i<n;i++){
		z = pow(data[i]-y, 2);
		w = w + z;
	}
	
	w = w / n;
	
	return w;
}
	
int main(void){
	int a, i;
	double ans;
	
	FILE *fp;
	
	fp = fopen("data.txt","r");
	if(fp == NULL){
		fprintf(stderr, "Cannot open file\n");
		return -1;
	}
	
	fscanf(fp,"%d",&a);
	
	double *data;
	data = (double *)malloc(sizeof(double)*a);
	
	for(i=0;i<a;i++){
		fscanf(fp,"%lf",&data[i]);
	}
	
	ans = myvar(data,a);
	
	printf("%lf\n",ans);
	
	fclose(fp);
	
	return 0;
}