//
// Created by wei zhao on 2020-01-18.
//

#ifndef ALGORITHMPRATICE_SELECTIONSORT_H
#define ALGORITHMPRATICE_SELECTIONSORT_H

#include "SortAlgorithm.h"

class SelectionSort : public SortAlgorithm {
public:
    void sort(std::vector<int> &nums) override;
    static void runTestCase();
};


#endif //ALGORITHMPRATICE_SELECTIONSORT_H
