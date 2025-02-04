#include<iostream>
#include<windows.h>


void setTimeout(int second) {

	
	Sleep(second * 1000);
	
}

auto Funciton = [=](int answer) {
	
	int diceNumber = rand();

	
	if (answer <= 1) {
		if (answer == diceNumber % 2) {
			return printf("%d,正解\n", diceNumber % 6);
		}
		else if (answer != diceNumber % 2) {
			return printf("%d,不正解\n", diceNumber % 6);
		}
	}
	else {
		return printf("指定の数字以外が入力されました");
	}


	return printf("end");
};

int main(int argc, const char* argv[]) {

	unsigned int randTime = (unsigned int)time(nullptr);
	srand(randTime);

	int answer;

	
	printf("半(1)か丁(0)か\n");
	scanf_s("%d", &answer);

	printf("start\n");

	setTimeout(5);

	Funciton(answer);
	
	return 0;
}