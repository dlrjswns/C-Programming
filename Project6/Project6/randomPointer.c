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
	worldcup d[4];
	long total_block, block_number;
	fp = fopen("d-group.bin", "rb");

	if (fp == NULL) {
		printf("File Open에 오류 발생 !");
		exit(1);
	}
	fseek(fp, 0L, SEEK_END);
	total_block = ftell(fp) / sizeof(worldcup);
	printf();


	if (fread(d, sizeof(worldcup), 4, fp) != 4) {
		printf("File read Error !");
		exit(1);
	}
	return 0;
}