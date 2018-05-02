/*
問題文
トリボナッチ数列というものがあります。この数列は3つ前までの数字を足したものです。
厳密には、
a1=0, a2=0, a3=1
an=an−1+an−2+an−3
と定義されています。参考までに、トリボナッチ数列表を掲載します。
この数列の第 n 項、an を 10007 で割った余りを求めてください。
*/

#include<iostream>
#include<vector>

int main() {
	int n;
	std::cin >> n;
	std::vector<long unsigned int> v{0,0,1};

	for (int i = 3; i < n; i++) {
		v.push_back((v[i - 1] + v[i - 2] + v[i - 3])%10007);
	}

	std::cout << v[n - 1]  << std::endl;

	return 0;
}