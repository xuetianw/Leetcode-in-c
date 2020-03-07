//
// Created by fred on 2020-03-07.
//

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int temp[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            temp[k++] = nums1[i++];
        } else {
            temp[k++] = nums2[j++];
        }
    }
    if (i == m) {
        while (j < n) {
            temp[k++] = nums2[j++];
        }
    }
    if (j == n) {
        while (i < m) {
            temp[k++] = nums1[i++];
        }
    }

    for (i = 0; i < nums1Size; i++) {
        nums1[i] = temp[i];
    }
}
