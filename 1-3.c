#include <stdio.h>

/*最小値を見つける関数*/
int mymin(int data[]){
	
	int i;
	int minimum;
	
	minimum = data[0];
	
	/*最小値の探索*/
	for( i = 1; i < 10; i++){
		if(data[i] < minimum){
			minimum = data[i];
		}
	}
	
	return minimum;  /*最小値を戻り値として返す*/
}

/*最大値を見つける関数*/
int mymax(int data[]){
	
	int i;
	int max;
	
	max = data[0];
	
	/*最大値の探索*/
	for( i = 1; i < 10; i++){
		if(max < data[i]){
			max = data[i];
		}
	}
	
	return max;  /*最大値を戻り値として返す*/
}

/*合計値を求める関数*/
int mysum(int data[]){
	
	int i;
	int sum;
	
	sum = 0;
	
	/*合計値の計算*/
	for( i = 0; i < 10; i++){
		sum = sum + data[i];
	}
	
	return sum;  /*合計値を戻り値として返す*/
}

/*main関数でそれぞれの関数を呼び出す*/
int main(void){
	
	int data[] = {41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
	int minians, maxans, sumans;
	
	minians = mymin(data);
	maxans = mymax(data);  /*実引数としてdataを渡し,戻り値を受け取る*/
	sumans = mysum(data);
	
	/*結果の出力*/
	printf("The minimum number is %d.\n", minians);
	printf("The max number is %d.\n", maxans);
	printf("These number's sum is %d.\n", sumans);
	
	return 0;
}