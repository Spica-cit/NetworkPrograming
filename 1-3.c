#include <stdio.h>

/*�ŏ��l��������֐�*/
int mymin(int data[]){
	
	int i;
	int minimum;
	
	minimum = data[0];
	
	/*�ŏ��l�̒T��*/
	for( i = 1; i < 10; i++){
		if(data[i] < minimum){
			minimum = data[i];
		}
	}
	
	return minimum;  /*�ŏ��l��߂�l�Ƃ��ĕԂ�*/
}

/*�ő�l��������֐�*/
int mymax(int data[]){
	
	int i;
	int max;
	
	max = data[0];
	
	/*�ő�l�̒T��*/
	for( i = 1; i < 10; i++){
		if(max < data[i]){
			max = data[i];
		}
	}
	
	return max;  /*�ő�l��߂�l�Ƃ��ĕԂ�*/
}

/*���v�l�����߂�֐�*/
int mysum(int data[]){
	
	int i;
	int sum;
	
	sum = 0;
	
	/*���v�l�̌v�Z*/
	for( i = 0; i < 10; i++){
		sum = sum + data[i];
	}
	
	return sum;  /*���v�l��߂�l�Ƃ��ĕԂ�*/
}

/*main�֐��ł��ꂼ��̊֐����Ăяo��*/
int main(void){
	
	int data[] = {41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
	int minians, maxans, sumans;
	
	minians = mymin(data);
	maxans = mymax(data);  /*�������Ƃ���data��n��,�߂�l���󂯎��*/
	sumans = mysum(data);
	
	/*���ʂ̏o��*/
	printf("The minimum number is %d.\n", minians);
	printf("The max number is %d.\n", maxans);
	printf("These number's sum is %d.\n", sumans);
	
	return 0;
}