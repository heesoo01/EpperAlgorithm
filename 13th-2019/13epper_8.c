#include <stdio.h>
#pragma warning(disable:4996)

char stack[11];
int top = -1;
char pop() {
	return stack[top--];
}
void push(char c) {
	stack[++top] = c;
}

int main(void) {
	int m; //����
	scanf("%d", &m);
	char c;
	char line;
	scanf("%c", &line);
	for (int i = 0;i < m;i++) {
		scanf("%c", &c);
		if (c == ' ')
			scanf("%c", &c);
		if ('0' <= c && c <= '9')//�ǿ����ڸ� ���ÿ� �ֱ�
			push(c);
		else {//�����ڸ� �� �ΰ��� ���� ����� �� �� ������� ���ÿ� �ֱ�
			int a = pop() - 48;
			int b = pop() - 48;
			if (c == '+')
				push(b + a + 48);
			else if (c == '-')
				push(b - a + 48);
			else if (c == "*")
				push(a*b+48 );
			else if (c == '/')
				push(b / a + 48);
		}
	}
	printf("%d", pop() - 48);

}