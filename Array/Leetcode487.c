//
// Created by fred on 2020-03-07.
//

int findMaxConsecutiveOnes(int* nums, int numsSize){
    int flip_count = 0;
    int left = 0;
    int right = 0;
    int max_count = 0;
    while (right <= numsSize - 1) {
        if (nums[right] == 1) {
            if (right - left + 1 > max_count) {
                max_count = right - left + 1;
            }
            right++;
        } else {
            if (flip_count == 0) {
                if (right - left + 1 > max_count) {
                    max_count = right - left + 1;
                }
                right++;
                flip_count++;
            } else {
                while (nums[left] != 0) {
                    left++;
                }
                left++;
                right++;
            }

        }
    }
    return max_count;
}

