#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int n = 0;//Ȧ��
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		for (int j = n - i;j > 0;j--)//�� n-i��
			printf(" ");//���� ���
		for (int j = 1;j <= i;j++)//�� i��
			printf("*");//�� ���
		printf("\n");
	}


	return 0;
}