#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int n; //���ڰ���
	int k; //��
	int ans = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &k);
		if (k % 2 == 0)
			continue;
		else
			ans += k;//Ȧ���� ���ϱ�
	}
	printf("%d", ans);
	return 0;

}