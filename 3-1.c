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
		printf("%d�Ԗڂ̊w���̏�����͂��ĉ�����\n",i+1);
		
		printf("�w���ԍ�:");
		scanf("%d",&ns_2nen[i].gakuban);
		
		printf("���w�̓_��:");
		scanf("%d",&ns_2nen[i].math);
		
		printf("�p��̓_��:");
		scanf("%d",&ns_2nen[i].eng);
		
		printf("�����̓_��:");
		scanf("%d",&ns_2nen[i].phy);
		
		ns_2nen[i].heikin = average(ns_2nen[i].math,ns_2nen[i].eng,ns_2nen[i].phy);
	}
	
	for(i=0;i<3;i++){
		printf("�w���ԍ�:%d ���ϓ_:%f\n",ns_2nen[i].gakuban,ns_2nen[i].heikin);
	}
	
	return 0;
}