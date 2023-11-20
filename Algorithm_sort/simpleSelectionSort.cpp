#include<iostream>
#include<vector>

using namespace std;

//--------------------------------------����----------------------------------------

// ��ѡ����������
void simpleSelectionSort(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		int min = i;  // ��ǰ����������¼��Сֵ������
		for (int j = i + 1; j < n; ++j) {
			if (v[min] > v[j]) {
				min = j;
			}
		}
		if (min != i) {
			swap(v[i], v[min]);  // ����
		}
	}
}

//--------------------------------------����----------------------------------------

// ��ѡ�����򣺽���
void simpleSelectionSortDesc(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		int max = i;  // ��ǰ����������¼���ֵ������  // �����޸Ĵ�1������min��max
		for (int j = i + 1; j < n; ++j) {
			if (v[max] < v[j]) {  // �����޸Ĵ�2
				max = j;
			}
		}
		if (max != i) {
			swap(v[i], v[max]);  // ����
		}
	}
}

//--------------------------------------����----------------------------------------

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