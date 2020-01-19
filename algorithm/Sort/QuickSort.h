//
// Created by zhaowei on 2020-01-19.
//

#ifndef ALGORITHMPRATICE_QUICKSORT_H
#define ALGORITHMPRATICE_QUICKSORT_H

#include "SortAlgorithm.h"

class QuickSort : public SortAlgorithm {
protected:
    int partition(std::vector<int> &nums, int l, int r);
    void quickSort(std::vector<int> &nums, int l, int r);
public:
    void sort(std::vector<int> &nums);
    static void runTestCase();
};


#endif //ALGORITHMPRATICE_QUICKSORT_H
