//
// Created by wei zhao on 2020-01-18.
//

#include "InsertionSort.h"
#include <iostream>


void InsertionSort::sort(std::vector<int> &nums) {
    for (int i = 1; i < nums.size(); ++i) {
        int tmp = nums[i];
        int j = i;
        for (; j > 0 && tmp < nums[j-1]; --j) {
            nums[j] = nums[j-1];
        }
        nums[j] = tmp;
    }
}

void InsertionSort::runTestCase() {
    std::vector<int> nums = {2,5,3,8,6,9,1};

    InsertionSort is;
    is.showNums(nums);
    is.sort(nums);
    is.showNums(nums);
}