#include <stdio.h>

int main(void){
	
	int a,b,r;
	
	printf("a,b‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢.\n");
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
		printf("Å‘åŒö–ñ”:%d\n",b);
	}
	
	return 0;
}