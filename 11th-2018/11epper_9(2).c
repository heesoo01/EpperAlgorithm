#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//��ȣ������ ���Ͽ���
//�տ������� ��ȣ������ ���� ���ʰ�ȣ�������� �����ʰ�ȣ������ �׻� ������Ѵ�.

int sum = 0;
int func(as, bs, level,n) {
	if (as < bs)
		return 0;
	if (as > n || bs > n)
		return 0;

	if (level == n * 2) {
		return sum = sum + 1;//�����߰�
	}
	func(as + 1, bs, level + 1, n);//���� ��ȣ �� ������
	func(as, bs + 1, level + 1, n);//������ ��ȣ �ϳ� �� ������
}
int main() {
	int n;
	scanf("%d", &n);
	int l = 0, r = 0;
	func(l, r, 0, n);
	printf("%d", sum);
	
}