//
// Created by fred on 2020-03-09.
//

#include "string.h"
#include "stdlib.h"
#include <stdio.h>
#include<time.h>
#include <stdbool.h>

void sort(int* a, int n);

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int i = 0, j = 0;
    sort(nums1, nums1Size);
    sort(nums2, nums2Size);

    int* arr = malloc((nums1Size + nums2Size) * sizeof(int));
    int count = 0;
    while(i <= nums1Size && j <= nums2Size) {
        if (nums1[i] == nums2[j]) {
            arr[count++] = nums1[i];
            while (nums1[i] == nums2[j]) {
                i++;
                j++;
            }
        } else {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            }
        }
    }
    int* new_ptr = realloc(arr, sizeof(int) * count);
    *returnSize = count;
    return new_ptr;
}

void sort(int* a, int n) {
    for (int i = 0; i < n; i++)                     //Loop for ascending ordering
    {
        for (int j = 0; j < n; j++)             //Loop for comparing other values
        {
            if (a[j] > a[i])                //Comparing other array elements
            {
                int tmp = a[i];         //Using temporary variable for storing last value
                a[i] = a[j];            //replacing value
                a[j] = tmp;             //storing last value
            }
        }
    }
}
int main() {
    int* arr = malloc(10 * sizeof(int));
    printf("%d", arr[0]);
    int arr1[4] = {1,2,2,1};
    int arr2[2]= {2,2};
    int size;
    int* arr3 = intersect(arr1, 4, arr2, 2, &size);
}
