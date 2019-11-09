//
// Created by zhaowei on 2019-11-09.
//

#ifndef LEET_MERGESORT_H
#define LEET_MERGESORT_H

#include "DivideAndConquer.h"

class MergeSort: public DivideAndConquer {
public:
    void mergeSort(std::vector<int>& arr, int left, int right) override;

private:
    void merge(std::vector<int>& arr, int l, int m, int r);
};


#endif //LEET_MERGESORT_H
