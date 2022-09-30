#include <stdio.h>
#include <string.h>

typedef struct user {
	char name[20];
	char phone[14];
	int quick;
} user ;

int main(void) {
	user d;
	strcpy_s(d.name, sizeof d.name, "김명환");
	strcpy_s(d.phone, sizeof d.phone, "011-123-4567");
	d.quick = 1;
	printf("name : %s\n", d.name);
	printf("phone : %s\n", d.phone);
	printf("quick : %d\n", d.quick);
	return 0;
}