#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int m = 0;//������ �ݾ�
	int n = 0;//��ǰ����
	int type = 0;//���� ����
	int count = 0;//ȭ�� ����
	int arr[8] = { 50000,10000,5000,1000,500,100,50,10 };
	scanf("%d", &m);
	scanf("%d", &n);
	int money = m - n;
	for (int i = 0;i < 8;i++) {
		if (money / arr[i] > 0) {
			type++;
			count += money / arr[i];
			money %= arr[i];
		}
	}
	printf("%d %d", type, count);

	return 0;
}
