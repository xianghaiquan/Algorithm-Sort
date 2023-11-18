#include<iostream>
#include<vector>

using namespace std;

// һ�˻��֣�����
int partition(vector<int> &v, int left, int right) {
	int pivot = v[left];  // ÿ��ѡ������ߵ�һ��Ԫ��Ϊ��׼
	while (left < right) {
		while (left < right && v[right] >= pivot) --right;
		v[left] = v[right];
		while (left < right && v[left] <= pivot) ++left;
		v[right] = v[left];
	}
	v[left] = pivot;
	return left;
}

// ��ѡ����������
void quickSort(vector<int>& v, int left, int right) {
	if(left < right) {
		int index = partition(v, left, right);
		quickSort(v, left, index - 1);
		quickSort(v, index + 1, right);
	}
}

// һ�˻��֣�����
int partitionDesc(vector<int>& v, int left, int right) {
	int pivot = v[left];  // ÿ��ѡ������ߵ�һ��Ԫ��Ϊ��׼
	while (left < right) {
		while (left < right && v[right] <= pivot) --right;  // �����޸Ĵ�1
		v[left] = v[right];
		while (left < right && v[left] >= pivot) ++left;  // �����޸Ĵ�2
		v[right] = v[left];
	}
	v[left] = pivot;
	return left;
}

// ��ѡ�����򣺽���
void quickSortDesc(vector<int>& v, int left, int right) {
	if (left < right) {
		int index = partitionDesc(v, left, right);  // �����޸Ĵ�3������partition��partitionDesc
		partitionDesc(v, left, index - 1);
		partitionDesc(v, index + 1, right);
	}
}



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