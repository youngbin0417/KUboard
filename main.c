#include <stdio.h>
#include <string.h>
#define MAX 30;

bool correct(const char* que) {
	char arr[MAX];
	gets_s(arr, MAX);
	int a = strcmp(que,arr);
	if ( a == 0) {
		return 1; // 두문자가 일치할 때
	}
	else {
		return 0;
	}
}

int main() {
	printf("hello world");

	return 0;
}
