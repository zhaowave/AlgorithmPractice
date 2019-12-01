//
// Created by wei zhao on 2019-12-01.
//

#include "ReverseString.h"


using namespace std;

std::string ReverseString::reverseLocal(std::string& str)
{
    size_t  len = str.length();
    int j = 0;
//  I love china
    for (int i = 0; i < len; ++i)
    {
        if(isspace(str[i]))
        {
//            reverse a single string
            for(int k = j; k < j + (i - j)/2; ++k)
            {
                char tmp;
                tmp = str[k];
                str[k] = str[i - 1 - (k - j)];
                str[i - 1 - (k - j)] = tmp;
            }

            ++i;
            j = i;
        }
    }
    return str;
}

std::string ReverseString::reverseString(std::string& str)
{
    size_t len = str.length();
    string ret = "";

    for (int i = len - 1; i >= 0; --i)
    {
        ret += str[i];
    }

    for(int i = 0; i < len/2; ++i)
    {
//        "I  love  china!"
        char tmp;
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }

    return ret;
}