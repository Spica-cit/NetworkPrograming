#include <stdio.h>

struct gakusei{
	int gakuban;
	int math;
	int eng;
	int phy;
	float heikin;
}ns_2nen[20];

float average(int x, int y, int z){
	float ans;
	
	ans = (float)( x + y + z ) / 3;
	
	return ans;
}

int Bsearch(int data[], int size, int n);

int main(void){
	
	int n, ans, i;
	int gakuban[20];
	int size = 20;
	
	FILE *fp;
	fp = fopen("gakusei.txt","r");
	if(fp == NULL){
		fprintf(stderr, "File Error\n");
		return -1;
	}
	for(i=0;i<20;i++){
		fscanf(fp, "%d", &ns_2nen[i].gakuban);
		fscanf(fp, "%d", &ns_2nen[i].math);
		fscanf(fp, "%d", &ns_2nen[i].eng);
		fscanf(fp, "%d", &ns_2nen[i].phy);
		
		ns_2nen[i].heikin = average(ns_2nen[i].math,ns_2nen[i].eng,ns_2nen[i].phy);
	}
	fclose(fp);
	
	for(i=0;i<size;i++){
		gakuban[i] = ns_2nen[i].gakuban;
	}
	
	printf("Search gakuban?:");
	scanf("%d",&n);
	
	ans = Bsearch(gakuban,size,n);
	
	if(ans==-1){
		printf("Not found.\n");
	}else{
		printf("%d 's heikin is %lf.\n",n,ns_2nen[ans].heikin);
	}
	
	return 0;
}

int Bsearch(int data[], int size, int n){
	
	int left, right, m, ans;
	
	ans = -1;
	left = 0;
	right = size - 1;
	
	while(left<=right){
		m = (left + right) / 2;
		if(data[m]==n){
			ans = m;
			break;
		}else if(data[m]<n){
			left = m + 1;
		}else{
			right = m - 1;
		}
	}
	return ans;
}