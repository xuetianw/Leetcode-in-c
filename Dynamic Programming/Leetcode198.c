//
// Created by fred on 2020-03-07.
//

int rob(int* nums, int numsSize){
    if (numsSize == 0) return 0;

    if (numsSize == 1) return nums[0];

    int max_arr[numsSize];
    max_arr[0] = nums[0];
    max_arr[1] = nums[0] > nums[1] ? nums[0] : nums[1];

    for (int i = 2; i < numsSize; i++) {
        int option1 = max_arr[i - 2] + nums[i];
        int option2 = max_arr[i - 1];
        max_arr[i] = option1 > option2 ? option1 : option2;
    }
    return max_arr[numsSize - 1];
}
