//
// Created by wei zhao on 2020-01-18.
//

#include "SortAlgorithm.h"

#include <iostream>

void SortAlgorithm::showNums(std::vector<int> nums){
    for (int i = 0; i < nums.size() ; ++i) {
        std::cout<<nums[i]<<" ";
    }
    std::cout<<std::endl;
}