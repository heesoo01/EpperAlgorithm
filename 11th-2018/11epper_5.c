#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//������ ���� ��� ���ϱ�

int main() {
	int day;//��¥
	scanf("%d", &day);
	int n;//���� ���
	scanf("%d", &n);
	int arr[100];
	for (int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	int res = 0;//������ ���� ���
	for (int i = 0;i < n;i++) {
		int k = arr[i] % 10;
		if (k == day%10 || k == (day + 5) % 10)
			res++;
	}
	printf("%d", res);
}