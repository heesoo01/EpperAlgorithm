#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int n = 0;//���ڰ���
	int k = 0;
	scanf("%d", &n);
	
	for (int i = 0;i < n;i++) {
		scanf("%d", &k);
		printf("%d %d\n", solution(k), (k / 100) * 100);
	}



	
	return 0;
}

int solution(int value) {
	if (value - 50 >=value / 100 * 100) {//�����ڸ��� 5�̻�
		return value = (value /100 + 1) * 100;
	}
	else
		return value = (value / 100) * 100;

}