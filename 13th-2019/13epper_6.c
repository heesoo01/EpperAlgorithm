#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int arr[3] = { 0 };//����
	for (int i = 0;i < 3;i++)
		scanf("%d", &arr[i]);
	int k = 0;
	scanf("%d", &k); //�κ����� ��
	int count = 0;
	for (int i = 0;i < 3;i++) {//���� 1
		if (arr[i] == k)
			count++;
	}
	for (int i = 0;i < 3;i++) {//���� 2
		if (arr[i % 3] + arr[(i + 1) % 3] == k)
			count++;
	}
	if (arr[0] + arr[1] + arr[2] == k)//���� 3
		count++;
	printf("%d", count);
}