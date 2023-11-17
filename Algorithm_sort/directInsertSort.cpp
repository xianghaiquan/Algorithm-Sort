#include<iostream>
#include<vector>

using namespace std;

// 直接插入排序：升序
void directInsertSort(vector<int> &v) {
	int n = v.size();
	for (int i = 1; i < n; i++) {
		if (v[i] < v[i - 1]) {  // 小于才能进行插入，保证稳定性
			int temp = v[i];  // 记住当前值
			int j;
			for (j = i - 1; j >= 0 && temp < v[j]; j--) {
				v[j + 1] = v[j];  // 后移
			}
			v[j + 1] = temp;
		}
	}
}

// 直接插入排序：降序
void directInsertSortDes(vector<int>& v) {
	int n = v.size();
	for (int i = 1; i < n; i++) {
		if (v[i] > v[i - 1]) {  // 小于才能进行插入，保证稳定性  // 降序修改处1
			int temp = v[i];  // 记住当前值
			int j;
			for (j = i - 1; j >= 0 && temp > v[j]; j--) {  // 降序修改处2
				v[j + 1] = v[j];  // 后移
			}
			v[j + 1] = temp;
		}
	}
}


int main() {
	vector<int> vec{ 49, 38, 65, 97, 76, 13, 27, 49 };
	//directInsertSort(vec);
	directInsertSortDes(vec);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	return 0;
}