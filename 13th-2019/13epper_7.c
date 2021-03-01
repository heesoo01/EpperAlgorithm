#include <stdio.h>
#pragma warning(disable:4996)

int count = 0;
int arr[10];

void solution(int s, int e) {
	if (s >= e) {
		return;
	}
	else if (arr[s] == arr[e]) {//������
		solution(s+1, e-1);
	}
	else if (arr[s] != arr[e]) {//�ٸ���
		if (arr[s]<arr[e]) {//�������� �� ũ��
			count++;
			arr[s + 1] = arr[s] + arr[s + 1];//���� ���� Ű����
			solution(s + 1, e );
		}
		else  {//������ �� ũ��
			count++;
			arr[e - 1] = arr[e] + arr[e - 1];//������ ���� Ű����
			solution(s , e - 1);
		}
	}
}

int main(void) {
	int n = 0;//��� ����
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
		scanf("%d", &arr[i]);
	solution(0, n - 1);
	printf("%d", count);
	return 0;
}

