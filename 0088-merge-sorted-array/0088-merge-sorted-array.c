#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    // Start from the back of both arrays
    int i = m - 1;     // End of actual data in nums1
    int j = n - 1;     // End of nums2
    int k = m + n - 1; // Last available spot in nums1

    // Compare elements from the end and move the larger one to the back
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If nums2 still has elements, copy them over.
    // (If nums1 has elements left, they are already in the right spot!)
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}