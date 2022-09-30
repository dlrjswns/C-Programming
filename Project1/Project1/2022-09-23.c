#include<stdio.h>
int plus(int x, int y);
int main(void) {
	int (*pt)(int a, int b);
	int a = 3, b = 5;
	pt = plus;
	printf("함수 plus의 주소 = %p\n", plus);
	printf("pt의 주소 = %p\n", &pt);
	printf("pt의 값 = %p\n", pt);
	printf("----------------------------------\n""result = %d\n", pt(a, b));
	printf("result = %d\n", (*plus)(a, b));
	return 0;
}