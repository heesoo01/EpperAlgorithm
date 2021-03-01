#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int s[], size_t s_len, int e[], size_t e_len) {
    int answer = 0;
    int N = s_len; //�л���
    int tmp;
    int e1 = -1, e2 = -1; // e1, e2�� �� �ڸ�

    //����ð� 1����, ���۽ð� 2���� �������� ������������ ����
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N - 1; j++) // 
        {
            if ((e[j] > e[j + 1]) || (e[j] == e[j + 1] && s[j] > s[j + 1]))
            { // ���� ����
                tmp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = tmp;
                tmp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < N; i++) 
    {
        if (e1 <= s[i]) // ���۽ð��� e1�� ����ð����� �ڿ� �����Ƿ� �ڸ��� ����ִ�.
        {
            e1 = e[i]; // e1�� �ڸ��� i�� �л��� ���� �ð��� ����
            answer++; // �л��� �߰�
        }

        else if (e2 <= s[i]) // e2�ڸ��� ��Ƿ� �л� �Ҵ�
        {
            e2 = e1; // �ߺ��� ���ϱ� ���� 1�� �ڸ��� ���� 2������ ����.
            e1 = e[i]; // e1�� �ڸ��� i�� �л��� ���� �ð��� �����մϴ�.
            answer++; // �л��� �߰�
        }
    }

    return answer; 
}

int main() { 
    int s[] = { 1, 2, 3, 4, 5 };
    int e[] = { 2, 3, 4, 5, 6 };
    size_t s_len = sizeof(s) / 4;
    size_t e_len = sizeof(e) / 4;

    printf("%d \n", solution(s, s_len, e, e_len));
}