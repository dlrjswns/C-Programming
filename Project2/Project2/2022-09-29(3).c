#include <stdio.h>

struct user {
	char name[20];
	char phone[14];
	int quick;
};

int main(void) {
	struct user d[2] = {
		{ "���ȯ", "011-123-4567", 1 },
		{ "������", "010-123-4523", 5}
	};
	int i;
	for (i = 0; i < 2; i++) {
		printf("d[%d].name :%s\n", i, d[i].name);
		printf("d[%d].phone :%s\n", i, d[i].phone);
		printf("d[%d].quick :%d\n", i, d[i].quick);
		printf("\n");
	}
	return 0;
}