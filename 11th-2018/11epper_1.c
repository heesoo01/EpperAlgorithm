#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//i��°���� j��°������ ���� �� ���ϱ�

int main(void) {
	int n;
	scanf("%d", &n);
	int i, j,val;
	scanf("%d %d", &i, &j);
	int sum = 0;
	for (int k = 1;k <= n;k++) {
		scanf("%d", &val);
		if (k >=i && k <=j) {
			sum += val;
		}	
	}
	printf("%d", sum);
}