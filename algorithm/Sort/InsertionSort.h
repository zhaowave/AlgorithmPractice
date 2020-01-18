//
// Created by wei zhao on 2020-01-18.
//

#ifndef ALGORITHMPRATICE_INSERTIONSORT_H
#define ALGORITHMPRATICE_INSERTIONSORT_H


#include <vector>
#include "SortAlgorithm.h"

class InsertionSort : public SortAlgorithm {
public:
    InsertionSort() = default;
    ~InsertionSort() = default;
    void sort(std::vector<int> &nums) override;
    static void runTestCase();
};


#endif //ALGORITHMPRATICE_INSERTIONSORT_H
