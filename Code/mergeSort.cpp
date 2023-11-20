#include <iostream>
#include <vector>

using namespace std;

//---------------------------------升序-------------------------------------

// 一趟归并：升序
void merge(vector<int> &A, int left, int mid, int right) {
    vector<int> B = A;
    int i, j, k;
    for (i = left, j = mid + 1, k = i;i <= mid && j <= right; k++) {
        if (B[i] <= B[j]) {
            A[k] = B[i++];
        }
        else {
            A[k] = B[j++];
        }
    }
    while (i <= mid) {
        A[k++] = B[i++];
    }
    while (j <= right){
        A[k++] = B[j++];
    }
}

// （2路）归并排序：升序
void mergeSort(vector<int> &v, int left, int right){
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(v, left, mid);
        mergeSort(v, mid + 1, right);
        merge(v, left, mid, right);
    }
}

//---------------------------------降序-------------------------------------

// 一趟归并：降序
void mergeDesc(vector<int>& A, int left, int mid, int right) {
    vector<int> B = A;
    int i, j, k;
    for (i = left, j = mid + 1, k = i; i <= mid && j <= right; k++) {
        if (B[i] >= B[j]) {   // 降序修改处1
            A[k] = B[i++];
        }
        else {
            A[k] = B[j++];
        }
    }
    while (i <= mid) {
        A[k++] = B[i++];
    }
    while (j <= right) {
        A[k++] = B[j++];
    }
}

// （2路）归并排序：降序
void mergeSortDesc(vector<int>& v, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSortDesc(v, left, mid);  // 降序修改处2：函数名称mergeSortDesc修改
        mergeSortDesc(v, mid + 1, right);
        mergeDesc(v, left, mid, right);  // 降序修改处3：函数名称mergeDesc修改
    }
}

//---------------------------------测试-------------------------------------

#if 1
int main() {
    vector<int> vec{ 49, 38, 65, 97, 76, 13, 27, 49 };
    int n = vec.size();
    //mergeSort(vec, 0, n-1);
    mergeSortDesc(vec, 0, n - 1);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}
#endif
