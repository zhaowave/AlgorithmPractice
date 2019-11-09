//
// Created by zhaowei on 2019-10-26.
//

#ifndef LEET_SOLUTION_H
#define LEET_SOLUTION_H

#include <iostream>
#include <vector>


class Solution{
public:
    Solution() = default;
    ~Solution(){}

    virtual void testMethod() {std::cout<<"Solution::testMethod()\n";}
    virtual std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> ret;
        return  ret;
    }
};


#endif //LEET_SOLUTION_H
