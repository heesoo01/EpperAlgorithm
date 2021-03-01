#include <stdio.h>
#include <math.h>

#pragma warning(disable:4996)
void hanoi(int n, char from, char to, char mid) {
	if (n == 0)
		return;

	hanoi(n - 1, from, mid, to);//���ϾƷ��ִ� ���� ���� �������� �߰����� �ű�
	printf("%d: %c->%c\n", n, from, to);//���ϾƷ��ִ� ������ �������� �ű�
	hanoi(n - 1, mid, to, from);//�߰����� �ű� n-1�� ������ �������� �ű�

}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", (int)pow(2, n) - 1);
	hanoi(n, 'A', 'C', 'B');
}