#include <stdio.h>

int main(void){
	int i, j;
	FILE *fp;
	char data[49*64];
	
	if((fp=fopen("ascii_art.txt","r")) == NULL ){
		printf("Cannot open file: ascii_art.txt\n");
		return -1;
	}
	
	fscanf(fp,"%s",&data);
	
	for(i=0;i<49;i++){
		for(j=0;j<64;j++){
			printf("%c",data[i*64+j]);
		}
		printf("\n");
	}
	
	fclose(fp);
	
	return 0;
}