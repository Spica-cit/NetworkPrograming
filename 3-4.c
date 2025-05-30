#include <stdio.h>

int Lsearch(int data[], int size, int n);
void output(int n, int ans);

int main(void){
	int data[] = {4, 2, 8, 9, 5, 3, 6, 1, 7};
	int size = sizeof(data) / sizeof(int);
	int n;
	int ans;
	
	printf("Search Number?:");
	scanf("%d",&n);
	
	ans = Lsearch(data, size, n);
	
	output(n, ans);
	
	return 0;
}

int Lsearch(int data[], int size, int n){
	
	int i, ans;
	ans = -1;
	i  = 0;
	
	while(i<size){
		if(data[i]==n){
			ans = i;
			break;
		}else{
			i++;
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