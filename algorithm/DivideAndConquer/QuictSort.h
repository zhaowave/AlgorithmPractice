//
// Created by zhaowei on 2019-11-09.
//

#ifndef LEET_QUICTSORT_H
#define LEET_QUICTSORT_H

#include "DivideAndConquer.h"

class QuictSort: public DivideAndConquer {

public:
    void quickSort(std::vector<int>& arr, int left, int right) override;

private:
    int partition(std::vector<int>& arr, int l, int r);

};


#endif //LEET_QUICTSORT_H
