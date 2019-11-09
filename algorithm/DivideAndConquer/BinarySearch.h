//
// Created by zhaowei on 2019-11-09.
//

#ifndef LEET_BINARYSEARCH_H
#define LEET_BINARYSEARCH_H

#include "DivideAndConquer.h"

class BinarySearch: public DivideAndConquer {
public:
    BinarySearch() = default;
    ~BinarySearch(){}
    int binarySearch(std::vector<int>& arr, int left,int right, int target) override;
};


#endif //LEET_BINARYSEARCH_H
