#include <stdio.h>

int main(void){
	
	int a,b,r;
	
	printf("a,bを入力してください.\n");
	scanf("%d%d",&a,&b);
	
	if(a<b){
		printf("Error.\n");
	}else{
		while(1){
			r = a % b;
			if(r==0){
				break;
			}
			a = b;
			b = r;
		}
		printf("最大公約数:%d\n",b);
	}
	
	return 0;
}