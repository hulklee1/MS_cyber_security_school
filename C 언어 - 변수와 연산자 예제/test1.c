#include <stdio.h>

int main(void)
{
	int age, score;  // 정수 변수 선언문 
	
<<<<<<< HEAD
	3+4;  //??????
	printf("���̰� ��� �Ǽ���? : ");	scanf("%d", &age);
	printf("�����¿�? : ");	scanf("%d", &score);
=======
	printf("나이가 어떻게 되세요? : ");	scanf("%d", &age);
	printf("점수는요? : ");	scanf("%d", &score);
>>>>>>> 9c2f58a66dee36fb7f0f21abfa91ff1a8008b082
	
//	printf("\n\nMy age : %d \n", age);
//	printf("%d is my point \n", score);
//	printf("Good \nmorning \neverybody\n");
	printf("\n\nMy age : %d \n%d is my point \nGood \nmorning \neverybody\n", age, score);
 
	return 0;
}
