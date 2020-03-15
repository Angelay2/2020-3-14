#include <stdio.h>
#include <windows.h>

// �ռ临�Ӷ�(�Ƕ�һ���㷨����������ʱռ�ô洢�ռ��С������)
// �ռ临�Ӷ�����Ǳ����ĸ���, ���ǳ���ռ���˶���bytes�Ŀռ�
// Ҳ�ô�O������ʾ��

void BubbleSort(int* a, int* n){
	ASSERT(a);
	for (size_t end = n; end > 0; --end){
		int exchange = 0;
		for (size_t i = 1; i < end; ++i){
			if (a[i - 1] > a[i]){
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 0)
			break;
	}
}
// ʵ��1ʹ���˳���������ռ�, ���Կռ临�Ӷ�O(1)
long long* Fibonacci(size_t n){
	if (n == 0)
		return NULL;
	long long* fibArrary = (long long*)malloc((n + 1) * sizeof(long long));
	fibArrary[0] = 0;
	fibArrary[1] = 1;
	for (int i = 2; i <= n; ++i){
		fibArrary[i] + fibArrary[i - 1] + f[i - 2];
	}
	return fibArrary;
}
// ʵ��2 ��̬������N���ռ�, �ռ临�Ӷ�ΪO(N)
long long Factorial(size_t N){
	return N < 2 ? N : Factorial(N - 1) * N;
}
// ʵ��3 �ݹ������N��, ������N��ջ֡, ÿ��ջ֡ʹ���˳������ռ�, �ռ临�Ӷ�ΪO(N)
int main(){
	
	system("pause");
	return 0;
}