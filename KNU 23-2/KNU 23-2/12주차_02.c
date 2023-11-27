#include <stdio.h>

int A, B;

int add()
{
	return A + B;
}


int main()
{
	int ans;
	A = 5;
	B = 7;

	ans = add();
	printf("%d + %d = %d", A, B, ans);

	return 0;

}