#include <stdio.h>
#include <Windows.h>

// 1. 算法效率(时间效率, 空间效率)
// 时间效率被称为时间复杂度, 而空间效率被称做空间复杂度.
// 时间复杂度主要衡量一个算法的运行速度, 而空间复杂度主要衡量一个算法所需要的额外空间
// 2. 时间复杂度: 在计算机科学中, 算法的时间复杂度是一个函数, 定量描述了算法的运行时间
// 一个算法所花费的时间与其中语句的执行次数成正比,
// 算法中的基本操作的执行次数,为算法的时间复杂度
// 3. 大O的渐进表示法(大O符号: 是用于描述函数渐进行为的数学符号
// 推导大O阶方法:
// 1. 用常熟1 取代运行时间中的所有加法常数, 
// 2. 在修改后的运行次数函数中. 只保留最高阶项
// 3. 如果最高阶项存在且不是 1, 则去除与这个项目相乘的常数, 得到的结果就是大O阶
// 计算下面函数基本操作执行了多少次
void Func1(int N){
	int count = 0;
	for (int i = 0; i < N; ++i){
		for (int j = 0; j < N; ++j){
			++count;
		}
	}
	for (int k = 0; k < 2 * N; ++k){
		++count;
	}
	int M = 10;
	while (M--){
		++count;
	}
	printf("%d\n", count);// 13
}
// Func1执行的基本操作次数 F(N) = N²+2*N+10, N=1,则执行次数为13 若N = 10,F(N) = 130
// 使用大O的渐进表示法后, Func1的时间复杂度为 O(N²)
// 大O的渐进表示法去掉了那些对结果影响不大的项, 简洁明了的表示出了执行次数
// 在实际中一般情况关注的是算法是最坏运行情况, 
// 所以在一个长度为N的数组中搜索数据x的时间复杂度为O(N)

// 4. 常见时间复杂度计算
void Func2(int N){
	int count = 0;

	for (int k = 0; k < 2 * N; ++k){
		++count;
	}

	int M = 10;
	while (M--){
		++count;
	}

	printf("%d\n", count);
}
// 实例1基本操作执行了 2N + 10次, 通过推导大O阶法知道, 时间复杂度为O(N);
void Func3(int N, int M){
	int count = 0;

	for (int k = 0; k < M; ++k){
		++count;
	}

	for (int k = 0; k < N; ++k){
		++count;
	}

	printf("%d\n", count);
}
// 实例2接班操作执行了 M + N 次, 有两个未知数, 时间复杂度为O(M+N);
void Func4(int N){
	int count = 0;

	for (int k = 0; k < 100; ++k){
		++count;
	}

	printf("%d\n", count);
}
// 该实例基本操作执行了10次, 通过推导大O阶方法, 时间复杂度为O(1)
const char* strchr(const char* str, int character);
// 该实例基本操作执行了最好1次, 最坏N次,时间复杂度看最坏, 为O(N);
void BubbleSort(int* a, int n){
	assert(a);
	for (size_t end = 0; end > 0; --end){
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
// 实例最好执行N次, 最坏执行(N*(N+1)/2)次, 时间复杂度为O(N)
int BinarySearch(int* a, int n, int x){
	assert(a);
	int begin = 0;
	int end = n - 1;
	while (begin < end){
		int mid = begin + ((end - begin) >> 1);
		if (a[mid] < x)
			begin = mid + 1;
		else if (a[mid] > x)
			end = mid;
		else
			return mid;
	}
	return -1;
}
// 时间复杂度为O(logN) ,logN在算法分析中是底数为2, 对数为N, 
long long Factorial(size_t N){
	return N < 2 ? N : Factorial(N - 1) * N;
}
// 实例基本操作递归了N次, 时间复杂度为O(N)
long long Fibonacci(size_t N){
	return N < 2 ? N : Fibonacci(N - 1) + Fibonacci(N - 2);
}
// 通过计算发现 基本操作递归了2 ^ N次, 时间复杂度为O(2^N)
int main(){
	int N = 1;
	Func2(N);
	system("pause");
	return 0;
}