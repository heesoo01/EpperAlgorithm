//�簢���� �ϼ��ϱ� ���� ������ ���� ��ǥ ���ϱ�
//�簢���� �̷�� �װ��� ��ǥ�� x��ǥ y��ǥ ���� �ߺ��� �ΰ��� �ִ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int arr[3][2];
	int count = 1;//�ߺ� ����
	int res[2];
	for (int i = 0;i < 3;i++)
		for (int j = 0;j < 2;j++)
			scanf("%d", &arr[i][j]);

	for (int i = 0;i < 2;i++) {
		int fst = arr[0][i];
		if (arr[1][i] != fst) {//ù��° ���� �ι�° ���� �ٸ���
			if (arr[2][i] != fst)//����° ���� ù��° ���� �ٸ���
				res[i] = fst;//���x���� ù��° �� ����
			else
				res[i] = arr[1][i];
		}
		else
			res[i] = arr[2][i];//ù��°���� �ι�°���� ������ ������� ����°���� ����.
	}

	printf("%d %d", res[0], res[1]);
	
}