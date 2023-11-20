#include <iostream>
#include <vector>

using namespace std;

//---------------------------------ÉýÐò-------------------------------------

// Ò»ÌË¹é²¢£ºÉýÐò
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

// £¨2Â·£©¹é²¢ÅÅÐò£ºÉýÐò
void mergeSort(vector<int> &v, int left, int right){
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(v, left, mid);
        mergeSort(v, mid + 1, right);
        merge(v, left, mid, right);
    }
}

//---------------------------------½µÐò-------------------------------------

// Ò»ÌË¹é²¢£º½µÐòÐò
void mergeDesc(vector<int>& A, int left, int mid, int right) {
    vector<int> B = A;
    int i, j, k;
    for (i = left, j = mid + 1, k = i; i <= mid && j <= right; k++) {
        if (B[i] >= B[j]) {   // ½µÐòÐÞ¸Ä´¦1
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

// £¨2Â·£©¹é²¢ÅÅÐò£º½µÐò
void mergeSortDesc(vector<int>& v, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSortDesc(v, left, mid);  // ½µÐòÐÞ¸Ä´¦2£ºº¯ÊýÃû³ÆmergeSortDescÐÞ¸Ä
        mergeSortDesc(v, mid + 1, right);
        mergeDesc(v, left, mid, right);  // ½µÐòÐÞ¸Ä´¦3£ºº¯ÊýÃû³ÆmergeDescÐÞ¸Ä
    }
}

//---------------------------------²âÊÔ-------------------------------------

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