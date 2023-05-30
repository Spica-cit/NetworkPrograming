#include <stdio.h>
#include <stdlib.h>

struct PLAYER{
	int ENERGY;
	int POISON;
} P;

struct MONSTER{
	int ENERGY;
} m;

int main(void){
	
	int com,damagep,damagem,heal,poison,poidame;
	
	//乱数の準備
	unsigned int seed;
	printf("Seed? = ");
	scanf("%d",&seed);
	srand(seed);
	
	//playerの初期設定(A)
	P.ENERGY = 300;
	P.POISON = 0;
	
	//monsterの初期設定(B)
	m.ENERGY = rand() % 401 + 100;
	printf("A monster appears!\n");
	
	//戦闘開始
	while(1){
		
		//playerの状態表示(C)
		printf("\nYour ENERGY:%d POISON:%d\n",P.ENERGY,P.POISON);
		
		//monsterの状態表示
		printf("Monster ENERGY:%d\n",m.ENERGY);
		
		//playerの行動決定(D)
		printf("Command? -> 1:Attack 2:Heal 3:Cure Poison\n");
		scanf("%d",&com);
		
		if(com==1){
			damagep = rand() % 41 + 10;
			printf("You attacked! A monster received %d damage!\n",damagep);
			m.ENERGY = m.ENERGY - damagep;
		}else if(com==2){
			heal = rand() % 21 + 30;
			printf("You recovered %d energy!\n",heal);
			P.ENERGY = P.ENERGY + heal;
			if(P.ENERGY>300){
				P.ENERGY = 300;
			}
		}else if(com==3){
			P.POISON = 0;
			printf("Your poison was cured!\n");
		}else{
			printf("MISS\n");
		}
		
		//monsterの生死判定
		if(m.ENERGY<=0){
			printf("GAME CLEAR.\n");
			break;
		}
		
		//monsterの行動(E)
		damagem = rand() % 41 + 10;
		printf("A monster attacked! You received %d damage!\n",damagem);
		P.ENERGY = P.ENERGY - damagem;
		
		//playerの生死判定
		if(P.ENERGY<=0){
			printf("GAME OVER.\n");
			break;
		}
		
		//毒の処理(F)
		if(P.POISON==0){
			poison = rand() % 20;
			if(poison==0){
				P.POISON = 1;
				printf("You were affected by the poison!\n");
			}
		}
		if(P.POISON==1){
			poidame = P.ENERGY * 0.05;
			P.ENERGY = P.ENERGY - poidame;
			printf("Your energy was decreased 5 percent by the poison!\n");
		}
		
		//playerの生死判定
		if(P.ENERGY<=0){
			printf("GAME OVER.\n");
			break;
		}
		
		//毒のダメージでgameoverになることはないと思います.なので,モンスターの行動の後に判定するだけでも大丈夫かと思いました.(maxの5%なら別ですが)
	}
	
	return 0;
}