#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int S, E;
	scanf("%d", &S);
	scanf("%d", &E);
	int count = 0;
	int k = 0;
	for (int i = S;i <= E;i++) {
		k = i % 10;
		if (k == 3 || k == 6 || k == 9) {//�����ڸ���
			count++;
			continue;
		}
		k = i / 10;
		if (k == 3 || k == 6 || k == 9)//�����ڸ���
			count++;
		
	}
	printf("%d", count);
}