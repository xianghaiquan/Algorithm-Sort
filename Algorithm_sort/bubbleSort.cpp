#include<iostream>
#include<vector>

using namespace std;

//--------------------------------------����----------------------------------------

// ð����������
void bubbleSort(vector<int> &v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		bool flag = false;  // ��¼����ð���Ƿ�������
		for (int j = 0; j < n - i - 1; ++j) {  // ��ǰ��������ÿ�ΰ����ֵ�������
			if (v[j] > v[j + 1]) {
				swap(v[j], v[j + 1]);
				flag = true;
			}
		}
		if (!flag) {  // ��δ����������˵���Ѿ���ǰ��������ǰ����ѭ��
			return;
		}
	}
}

// ð����������2
void bubbleSort2(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		bool flag = false;  // ��¼����ð���Ƿ�������
		for (int j = n - 1; j > i; --j) {  // �Ӻ���ǰ������ÿ�ΰ���Сֵ������ǰ
			if (v[j] < v[j - 1]) {
				swap(v[j], v[j - 1]);
				flag = true;
			}
		}
		if (!flag) {  // ��δ����������˵���Ѿ���ǰ��������ǰ����ѭ��
			return;
		}
	}
}

//--------------------------------------����----------------------------------------

// ð�����򣺽���
void bubbleSortDesc(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		bool flag = false;  // ��¼����ð���Ƿ�������
		for (int j = 0; j < n - i - 1; ++j) {  // ��ǰ��������ÿ�ΰ����ֵ�������
			if (v[j] < v[j + 1]) {  //������޸Ĵ˴�
				swap(v[j], v[j + 1]);
				flag = true;
			}
		}
		if (!flag) {  // ��δ����������˵���Ѿ���ǰ��������ǰ����ѭ��
			return;
		}
	}
}

// ð�����򣺽���2
void bubbleSortDesc2(vector<int>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		bool flag = false;  // ��¼����ð���Ƿ�������
		for (int j = n - 1; j > i; --j) {  // �Ӻ���ǰ������ÿ�ΰ���Сֵ������ǰ
			if (v[j] > v[j - 1]) {  //������޸Ĵ˴�
				swap(v[j], v[j - 1]);
				flag = true;
			}
		}
		if (!flag) {  // ��δ����������˵���Ѿ���ǰ��������ǰ����ѭ��
			return;
		}
	}
}

//--------------------------------------����----------------------------------------

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