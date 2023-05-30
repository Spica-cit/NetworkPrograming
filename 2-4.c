#include <stdio.h>

int main(void){
	
	char str1[] = "Chiba Institute";
	char str2[] = "Technology";
	char str3[30];
	char str4[30];
	char str5[] = " of ";
	
	strcpy(str3,str1);
	strcat(str3,str5);
	strcat(str3,str2);
	
	printf("%s\n",str3);
	
	sprintf(str4,"%s%s%s",str1,str5,str2);
	
	printf("%s\n",str4);
	
	return 0;
}