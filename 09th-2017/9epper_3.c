#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	char* names[50];
	char buffer[30];
	int k = 0;
	for (int i = 0;i < n;i++) {
		scanf("%s", buffer);
		//���ۿ� ���ڿ��� �Է¹�����, 
		//�� ���� ��ŭ �� ���ڿ��� ���� �޸𸮸� �Ҵ��Ѵ�.
		//���� �Ҵ�� �޸𸮿� ������ ������ �����ϰ� �� ���� ��ġ�� �迭�� �߰�
		k = strlen(buffer);
		if (k > 0) {
			char* newstr = (char*)malloc(sizeof(char) * (k + 1));
			strcpy(newstr, buffer);
			names[i] = newstr;
		}
		else {
			break;
		}
	}
	for (int i = 0;i < n;i++) {
		printf("Hello, %s!\n",names[i]);
	}
	return 0;
	
}

