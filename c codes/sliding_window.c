#include <limits.h>
#include <math.h>
#include <stdio.h>
int max(int num1, int num2)
{
	return (num1 > num2) ? num1 : num2;
}
int maxSum(int arr[], int n, int k)
{

	int max_sum = INT_MIN;
	for (int i = 0; i < n - k + 1; i++) {
		int current_sum = 0;
		for (int j = 0; j < k; j++)
			current_sum = current_sum + arr[i + j];
		max_sum = max(current_sum, max_sum);
	}

	return max_sum;
}

int main()
{
	int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
	int k = 4;
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d", maxSum(arr, n, k));
	return 0;
}

