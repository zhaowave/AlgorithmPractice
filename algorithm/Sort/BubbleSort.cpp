//
// Created by wei zhao on 2020-01-18.
//

#include "BubbleSort.h"
#include <iostream>
#include <algorithm>


void BubbleSort::sort(std::vector<int> &nums) {
    for (int i = 1; i < nums.size(); ++i) {
        bool swap = false;
        for (int j = 0; j < nums.size() - i; ++j) {
            if(nums[j] > nums[j + 1]){
                swap = true;
                std::swap(nums[j], nums[j+1]);
            }
        }
        if(!swap){
            break;
        }
    }
}

void BubbleSort::runTestCase() {
    std::vector<int> nums = {2,5,3,8,6,9,1};
    BubbleSort bs;
    bs.showNums(nums);
    bs.sort(nums);
    bs.showNums(nums);
}