#include<iostream>
#include<windows.h>


typedef void (*PFunc)(int*);

void DispResult(int* s) {
	printf("%d秒待って実行されたよ\n", *s);

}

void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);

	p(&second);
}

int main() {
	
	int dice;
	int n;

	printf("サイコロふる\n");

	srand((unsigned int)time(NULL));

	dice = rand() % 6 + 1;

	printf("半か丁か\n");
	printf("1が半、2が丁\n");

	scanf_s("%d", &n);

	setTimeout(DispResult, 3);

	if ((dice == 1 && n == 2) || (dice == 2 && n == 1) || (dice == 3 && n == 2) || (dice == 4 && n == 1) || (dice == 5 && n == 2) || (dice == 6 && n == 1)) {

		printf("不整脈\n");
	}
	else
	{
		printf("正常\n");
	}

	

	return 0;
}