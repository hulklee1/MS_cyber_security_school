#include <stdio.h>
int main()
{
	int index = 1, val = 0, end;
	
	printf("�ε��� ���۰���? "); scanf("%d", &index);
	printf("       ���ᰪ��? "); scanf("%d", &end);
	/*while(index < end)
	{
		val = val + index;
		printf(" %-5d  %3d\n", val, index); // %(-)(n)d
		//index++;
		index = index + 2;
	}*/
	for(/*index=index*/; index < end; index += 2)
	{
		val = val + index;
		printf(" %-5d  %3d\n", val, index); // %(-)(n)d
	}
}
