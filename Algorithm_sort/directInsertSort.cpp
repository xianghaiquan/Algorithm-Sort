#include<iostream>
#include<vector>

using namespace std;

// ֱ�Ӳ�����������
void directInsertSort(vector<int> &v) {
	int n = v.size();
	for (int i = 1; i < n; i++) {
		if (v[i] < v[i - 1]) {  // С�ڲ��ܽ��в��룬��֤�ȶ���
			int temp = v[i];  // ��ס��ǰֵ
			int j;
			for (j = i - 1; j >= 0 && temp < v[j]; j--) {
				v[j + 1] = v[j];  // ����
			}
			v[j + 1] = temp;
		}
	}
}

// ֱ�Ӳ������򣺽���
void directInsertSortDes(vector<int>& v) {
	int n = v.size();
	for (int i = 1; i < n; i++) {
		if (v[i] > v[i - 1]) {  // С�ڲ��ܽ��в��룬��֤�ȶ���  // �����޸Ĵ�1
			int temp = v[i];  // ��ס��ǰֵ
			int j;
			for (j = i - 1; j >= 0 && temp > v[j]; j--) {  // �����޸Ĵ�2
				v[j + 1] = v[j];  // ����
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