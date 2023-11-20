#include<iostream>
#include<vector>

using namespace std;

//--------------------------------------升序----------------------------------------

// 一趟划分：升序
int partition(vector<int> &v, int left, int right) {
	int pivot = v[left];  // 每次选择最左边第一个元素为基准
	while (left < right) {
		while (left < right && v[right] >= pivot) --right;
		v[left] = v[right];
		while (left < right && v[left] <= pivot) ++left;
		v[right] = v[left];
	}
	v[left] = pivot;
	return left;
}

// 简单选择排序：升序
void quickSort(vector<int>& v, int left, int right) {
	if(left < right) {
		int index = partition(v, left, right);
		quickSort(v, left, index - 1);
		quickSort(v, index + 1, right);
	}
}

//--------------------------------------降序----------------------------------------

// 一趟划分：降序
int partitionDesc(vector<int>& v, int left, int right) {
	int pivot = v[left];  // 每次选择最左边第一个元素为基准
	while (left < right) {
		while (left < right && v[right] <= pivot) --right;  // 降序修改处1
		v[left] = v[right];
		while (left < right && v[left] >= pivot) ++left;  // 降序修改处2
		v[right] = v[left];
	}
	v[left] = pivot;
	return left;
}

// 简单选择排序：降序
void quickSortDesc(vector<int>& v, int left, int right) {
	if (left < right) {
		int index = partitionDesc(v, left, right);  // 降序修改处3，所有partition改partitionDesc
		partitionDesc(v, left, index - 1);
		partitionDesc(v, index + 1, right);
	}
}

//--------------------------------------测试----------------------------------------

#if 1
int main() {
	vector<int> vec{ 49, 38, 65, 97, 76, 13, 27, 49 };
	int n = vec.size();
	//quickSort(vec, 0, n-1);
	quickSortDesc(vec, 0, n - 1);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	return 0;
}
#endif