//
// Created by zhaowei on 2020-01-19.
//

#include "QuickSort.h"



int QuickSort::partition(std::vector<int> &nums, int l, int r) {
    int pivot = nums[r]; // pivot
    int i = (l - 1); // Index of smaller element

    for (int j = l; j <= r - 1; j++)
    {
        // If current element is smaller than the pivot
        if (nums[j] < pivot)
        {
            i++; // increment index of smaller element
            std::swap(nums[i], nums[j]);
        }
    }
    std::swap(nums[i + 1], nums[r]);
    return (i + 1);

}

void QuickSort::quickSort(std::vector<int> &nums, int l, int r) {
    if(l < r){
        int p = this->partition(nums, l, r);
        this->quickSort(nums, l, p-1);
        this->quickSort(nums, p+1,r);
    }
}

void QuickSort::sort(std::vector<int> &nums){
    this->quickSort(nums, 0, nums.size() - 1);
}

void QuickSort::runTestCase() {
    std::vector<int> nums = {2,5,3,8,6,9,1};
    QuickSort qs;
    qs.showNums(nums);
    qs.sort(nums);
    qs.showNums(nums);
}