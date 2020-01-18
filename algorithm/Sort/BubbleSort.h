//
// Created by wei zhao on 2020-01-18.
//

#ifndef ALGORITHMPRATICE_BUBBLESORT_H
#define ALGORITHMPRATICE_BUBBLESORT_H

#include "SortAlgorithm.h"
#include <vector>

class BubbleSort : public SortAlgorithm {
public:
    BubbleSort() = default;
    ~BubbleSort() = default;
    void sort(std::vector<int> &nums) override;

    static void runTestCase();
};


#endif //ALGORITHMPRATICE_BUBBLESORT_H
