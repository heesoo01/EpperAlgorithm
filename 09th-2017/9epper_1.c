#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1���� n������ �ڿ��� �� 2�� 3�� ������� ���϶�

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1;i <= n / 6;i++) {
		printf("%d ", i * 6);
	}
}