#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���� ����ϱ�
int main() {
	int month;
	int day;
	scanf("%d", &month);
	scanf("%d", &day);
	int count = 0;
	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	count = sum(arr, month - 1) + day;
	count = count % 7;
	switch (count) {
	case 1:
		printf("%s", "�Ͽ���");
		break;
	case 2:
		printf("%s", "������");
		break;
	case 3:
		printf("%s", "ȭ����");
		break;
	case 4:
		printf("%s", "������");
		break;
	case 5:
		printf("%s", "�����");
		break;
	case 6:
		printf("%s", "�ݿ���");
		break;
	case 0:
		printf("%s", "�����");
		break;
	}
}

int sum(int arr[],int idx) {
	int sum = 0;
	for (int i = 0;i < idx + 1;i++)
		sum += arr[i];
	return sum;
}