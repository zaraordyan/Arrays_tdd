
// Problem 3
bool firstArrIsSubarray(const int arr1[], int m, const int arr2[], int k) {
    for (int i = 0; i <= k - m; i++) {
        int j = 0;
        for (; j < m; j++) {
            if (arr2[i + j] != arr1[j]) {
                break;
            }
        }
        if (j == m) return true;
    }
    return false;
}

bool isSubarray(const int arr1[], int m, const int arr2[], int k) {
    
    if (m >= k) {
        return firstArrIsSubarray(arr2, k, arr1, m);
    } else {
        return firstArrIsSubarray(arr1, m, arr2, k);
    }
}
