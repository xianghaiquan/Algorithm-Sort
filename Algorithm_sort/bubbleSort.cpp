#include<iostream>
#include<vector>

using namespace std;

//--------------------------------------升序----------------------------------------

// 冒泡排序：升序
void bubbleSort(vector<int> &v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		bool flag = false;  // 记录本次冒泡是否发生交换
		for (int j = 0; j < n - i - 1; ++j) {  // 从前向后遍历，每次把最大值放在最后
			if (v[j] > v[j + 1]) {
				swap(v[j], v[j + 1]);
				flag = true;
			}
		}
		if (!flag) {  // 若未发生交换，说明已经提前有序，则提前结束循环
			return;
		}
	}
}

// 冒泡排序：升序2
void bubbleSort2(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		bool flag = false;  // 记录本次冒泡是否发生交换
		for (int j = n - 1; j > i; --j) {  // 从后向前遍历，每次把最小值放在最前
			if (v[j] < v[j - 1]) {
				swap(v[j], v[j - 1]);
				flag = true;
			}
		}
		if (!flag) {  // 若未发生交换，说明已经提前有序，则提前结束循环
			return;
		}
	}
}

//--------------------------------------降序----------------------------------------

// 冒泡排序：降序
void bubbleSortDesc(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		bool flag = false;  // 记录本次冒泡是否发生交换
		for (int j = 0; j < n - i - 1; ++j) {  // 从前向后遍历，每次把最大值放在最后
			if (v[j] < v[j + 1]) {  //降序仅修改此处
				swap(v[j], v[j + 1]);
				flag = true;
			}
		}
		if (!flag) {  // 若未发生交换，说明已经提前有序，则提前结束循环
			return;
		}
	}
}

// 冒泡排序：降序2
void bubbleSortDesc2(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		bool flag = false;  // 记录本次冒泡是否发生交换
		for (int j = n - 1; j > i; --j) {  // 从后向前遍历，每次把最小值放在最前
			if (v[j] > v[j - 1]) {  //降序仅修改此处
				swap(v[j], v[j - 1]);
				flag = true;
			}
		}
		if (!flag) {  // 若未发生交换，说明已经提前有序，则提前结束循环
			return;
		}
	}
}

//--------------------------------------测试----------------------------------------

#if 1
int main() {
	vector<int> vec{ 49, 38, 65, 97, 76, 13, 27, 49 };
	//bubbleSort(vec);
	//bubbleSort2(vec);
	//bubbleSortDesc(vec);
	bubbleSortDesc2(vec);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	return 0;
}
#endif