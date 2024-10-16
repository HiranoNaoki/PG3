#include<iostream>
#include<windows.h>



int Recursive(int n) {
	if (n<= 1)
	{
		return 100;

	}
	return ( Recursive(n-1)*2-50);
}

int main() {
	


	
	int result;

	for (int n = 1; n < 10; n++)
	{
		result = Recursive(n);
		printf("%d時間後の給料　= %d\n", n, result);
	}
	
	return 0;
}