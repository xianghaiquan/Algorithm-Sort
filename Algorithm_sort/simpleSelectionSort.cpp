#include<iostream>
#include<vector>

using namespace std;

// 简单选择排序：升序
void simpleSelectionSort(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		int min = i;  // 从前向后遍历，记录最小值的索引
		for (int j = i + 1; j < n; ++j) {
			if (v[min] > v[j]) {
				min = j;
			}
		}
		if (min != i) {
			swap(v[i], v[min]);  // 交换
		}
	}
}

// 简单选择排序：降序
void simpleSelectionSortDesc(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		int max = i;  // 从前向后遍历，记录最大值的索引  // 降序修改处1，所有min改max
		for (int j = i + 1; j < n; ++j) {
			if (v[max] < v[j]) {  // 降序修改处2
				max = j;
			}
		}
		if (max != i) {
			swap(v[i], v[max]);  // 交换
		}
	}
}

#if 0
int main() {
	vector<int> vec{ 49, 38, 65, 97, 76, 13, 27, 49 };
	//simpleSelectionSort(vec);
	simpleSelectionSortDesc(vec);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	return 0;
}
#endif