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
		printf("‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}else{
		printf("‚¤‚é‚¤”N‚Å‚·\n");
	}
	
	return 0;
}