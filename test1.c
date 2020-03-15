#include <stdio.h>
#include <windows.h>

// 空间复杂度(是对一个算法在运行中临时占用存储空间大小的量度)
// 空间复杂度算的是变量的个数, 不是程序占用了多少bytes的空间
// 也用大O渐进表示法

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
// 实例1使用了常数个额外空间, 所以空间复杂度O(1)
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
// 实例2 动态开辟了N个空间, 空间复杂度为O(N)
long long Factorial(size_t N){
	return N < 2 ? N : Factorial(N - 1) * N;
}
// 实例3 递归调用了N次, 开辟了N个栈帧, 每个栈帧使用了常数个空间, 空间复杂度为O(N)
int main(){
	
	system("pause");
	return 0;
}