﻿#include <stdio.h>
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
// Func1执行的基本操作次数 F(N) = N²+2*N+10, N=1,则执行次数为13 若N = 10,F(N) = 100
// 使用大O的渐进表示法后, Func1的时间复杂度为 O(N²)
// 大O的渐进表示法去掉了那些对结果影响不大的项, 简洁明了的表示出了执行次数
// 在实际中一般情况关注的是算法是最坏运行情况, 
// 所以在一个长度为N的数组中搜索数据x的时间复杂度为O(N)

int main(){
	int N = 1;
	Func1(N);
	system("pause");
	return 0;
}