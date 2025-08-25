#include <stdio.h>

int main(void)
{
	int age, score;  // ì •ìˆ˜ ë³€ìˆ˜ ì„ ì–¸ë¬¸ 
	
<<<<<<< HEAD
	3+4;  //??????
	printf("³ªÀÌ°¡ ¾î¶»°Ô µÇ¼¼¿ä? : ");	scanf("%d", &age);
	printf("Á¡¼ö´Â¿ä? : ");	scanf("%d", &score);
=======
	printf("ë‚˜ì´ê°€ ì–´ë–»ê²Œ ë˜ì„¸ìš”? : ");	scanf("%d", &age);
	printf("ì ìˆ˜ëŠ”ìš”? : ");	scanf("%d", &score);
>>>>>>> 9c2f58a66dee36fb7f0f21abfa91ff1a8008b082
	
//	printf("\n\nMy age : %d \n", age);
//	printf("%d is my point \n", score);
//	printf("Good \nmorning \neverybody\n");
	printf("\n\nMy age : %d \n%d is my point \nGood \nmorning \neverybody\n", age, score);
 
	return 0;
}
