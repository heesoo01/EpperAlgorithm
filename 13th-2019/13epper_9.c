#include <stdio.h>
#pragma warning(disable:4996)

int max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

int main() {
	int n; //���� ����
	scanf("%d", &n);
	int arr[30000];
	int dp[30000];
	int count = 0;
	for (int i = 0;i < n;i++)
		scanf("%d", &arr[i]); //���� �׼�

	dp[0] = arr[0]; //n==1
	if (n > 1) 
		dp[1] = arr[0] + arr[1];
	if (n > 2)
		dp[2] = max(arr[1] + arr[2], dp[0] + arr[2]);
	count = max(dp[0], max(dp[1], dp[2]));//n==3
	for (int i = 3;i < n;i++) {
		dp[i] = max(dp[i - 1], max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]));
		//������ ���� ����X , ������ ���� ����O �� �ִ�
	
		count = max(dp[i], count);
	}
	printf("%d", count);

}