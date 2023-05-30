#include <stdio.h>

struct gakusei{
	int gakuban;
	int math;
	int eng;
	int phy;
	float heikin;
}ns_2nen[3];

float average(int x,int y,int z){
	float ans;
	
	ans = (float)( x + y + z ) / 3;
	
	return ans;
}

int main(void){
	
	int i;
	
	for(i=0;i<3;i++){
		printf("%d番目の学生の情報を入力して下さい\n",i+1);
		
		printf("学生番号:");
		scanf("%d",&ns_2nen[i].gakuban);
		
		printf("数学の点数:");
		scanf("%d",&ns_2nen[i].math);
		
		printf("英語の点数:");
		scanf("%d",&ns_2nen[i].eng);
		
		printf("物理の点数:");
		scanf("%d",&ns_2nen[i].phy);
		
		ns_2nen[i].heikin = average(ns_2nen[i].math,ns_2nen[i].eng,ns_2nen[i].phy);
	}
	
	for(i=0;i<3;i++){
		printf("学生番号:%d 平均点:%f\n",ns_2nen[i].gakuban,ns_2nen[i].heikin);
	}
	
	return 0;
}