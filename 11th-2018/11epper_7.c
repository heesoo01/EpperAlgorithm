#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//���� �ִ� ��հ��� ����Ϸ��� ���� ���� ������ ���ʴ�� �־���Ѵ�.
//���� ū ���� ���� ���� �������ϹǷ�
int main() {
	int n;
	scanf("%d", &n);//n�� ����
	float arr[20];
	for (int i = 0;i < n;i++)
		scanf("%f", &arr[i]);
	float temp;
	float m;
	for(int i=0;i<n;i++) //������������ ��������
		for (int j = 0;j < n - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	for (int i = 0;i < n-1;i++) {
		m = (arr[i] + arr[i + 1])/2.0;
		arr[i + 1] = m;
	}
	printf("%f", m);

}