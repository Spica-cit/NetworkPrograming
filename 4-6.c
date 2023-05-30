#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int Bsearch(int data[], int size, int n);
void output(int n, int ans);

int main(void){
	
	int data[SIZE];
	int size = SIZE;
	int seed;
	int i, j, n, ans, a;
	
	printf("Seed?=");
	scanf("%d",&seed);
	srand(seed);
	
	for(i=0;i<size;i++){
		data[i] = rand() % 100 + 1;
	}
	
	for(i=0;i<size;i++){
		printf("%4d",data[i]);
	}
	printf("\n");
	
	for(i=0;i<size-1;i++){
		for(j=size-1;j>i;j--){
			if(data[j]<data[j-1]){
				a = data[j];
				data[j] = data[j-1];
				data[j-1] = a;
			}
		}
	}
	
	for(i=0;i<size;i++){
		printf("%4d",data[i]);
	}
	printf("\n");
	
	printf("Search Number?:");
	scanf("%d",&n);
	
	ans = Bsearch(data, size, n);
	
	output(n, ans);
	
	return 0;
}

int Bsearch(int data[], int size, int n){
	
	int left, right, m, ans;
	
	ans = -1;
	left = 0;
	right = size-1;
	
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

void output(int n, int ans){
	if(ans==-1){
		printf("%d is not found.\n",n);
	}
	else{
		printf("%d is found in data[%d].\n",n,ans);
	}
}