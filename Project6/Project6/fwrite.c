#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char na[10];
	int vic;
	int tie;
	int def;
} worldcup;

int main(void) {
	FILE* fp; int i;
	worldcup d[4] = {
		{"���ѹα�", 2, 1, 0},
		{"�̱�", 1, 1, 1},
		{"������Į", 1, 0, 2},
		{"������", 1, 0, 2}
	};
	fp = fopen("d-group.bin", "wb");

	if (fp == NULL) {
		printf("File Open�� ���� �߻� !");
		exit(1);
	}
	if (fwrite(d, sizeof(worldcup), 4, fp) != 4) {

	}
	return 0;
}