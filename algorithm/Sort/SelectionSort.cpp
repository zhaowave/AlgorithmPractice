//
// Created by wei zhao on 2020-01-18.
//

#include "SelectionSort.h"

void SelectionSort::sort(std::vector<int> &nums){
    for (int i = 0; i < nums.size(); ++i) {
        int minItem = nums[i];
        int k = i;
        for (int j = i+1; j < nums.size(); ++j) {
            if(nums[j] < minItem){
                minItem = nums[j];
                k = j;
            }
        }
        std::swap(nums[k], nums[i]);
    }
}

void SelectionSort::runTestCase() {
    std::vector<int> nums = {2,5,3,8,6,9,1};
    SelectionSort ss;
    ss.showNums(nums);
    ss.sort(nums);
    ss.showNums(nums);
}
