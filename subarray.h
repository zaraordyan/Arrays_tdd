
// Problem 3
bool isSubarray(const int arr1[], int m, const int arr2[], int k) {
    if (m >= k) {
        for (int i = 0; i <= m - k; i++) {
            int j = 0;
            for (; j < k; j++) {
                if (arr1[i + j] != arr2[j]) {
                    break;
                }
            }
            if (j == k) return true;
        }
    } else {
        for (int i = 0; i <= k - m; i++) {
            int j = 0;
            for (; j < m; j++) {
                if (arr2[i + j] != arr1[j]) {
                    break;
                }
            }
            if (j == m) return true;
        }
    }
    return false;
}
