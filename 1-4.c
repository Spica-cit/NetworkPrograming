#include<stdio.h>

int main(void){
	
	int year,i,ans;
	
	scanf("%d",&year);
	
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				ans = 1;
			}else{
				ans = 0;
			}
		}else{
			ans = 1;
		}
	}else{
		ans = 0;
	}
	
	if(ans==0){
		printf("���邤�N�ł͂���܂���\n");
	}else{
		printf("���邤�N�ł�\n");
	}
	
	return 0;
}