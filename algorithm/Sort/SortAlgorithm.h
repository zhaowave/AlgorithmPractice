//
// Created by wei zhao on 2020-01-18.
//

#ifndef ALGORITHMPRATICE_SORTALTORITHM_H
#define ALGORITHMPRATICE_SORTALTORITHM_H

#include <vector>

class SortAlgorithm {
public:
    virtual void sort(std::vector<int> &nums) = 0;
    void showNums(std::vector<int> nums);
};


#endif //ALGORITHMPRATICE_SORTALTORITHM_H
