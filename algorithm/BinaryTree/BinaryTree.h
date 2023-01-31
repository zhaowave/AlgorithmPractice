//
// Created by wei zhao on 2020-01-19.
//

#ifndef ALGORITHMPRATICE_BINARYTREE_H
#define ALGORITHMPRATICE_BINARYTREE_H

#include <memory>

template <class T>
class BinaryTree {
private:
    T data;
    std::shared_ptr<BinaryTree> l;
    std::shared_ptr<BinaryTree> r;
public:
    BinaryTree() = default;
    BinaryTree(const T& t) {this->data = t;}
    ~BinaryTree() = default;
    inline void setData(T t) {this->data = t;}
    inline T getData() {return this->data;}
    inline std::shared_ptr<BinaryTree>& left() { return  this->l;}
    inline std::shared_ptr<BinaryTree>& right() { return  this->r;}
    inline void setLeft(std::shared_ptr<BinaryTree>& l) {this->l = l;}
    inline void setRight(std::shared_ptr<BinaryTree>& r) {this->r = r;}

    static void preOrder();
    static void postOrder();
    static void inOrder();
    static void runTestCase();
};


#endif //ALGORITHMPRATICE_BINARYTREE_H
