//
// Created by wei zhao on 2020-01-19.
//

#ifndef ALGORITHMPRATICE_BINARYTREE_H
#define ALGORITHMPRATICE_BINARYTREE_H

template <class T>
class BinaryTree {
private:
    T m_data;
    BinaryTree *m_left = nullptr;
    BinaryTree *m_right = nullptr;
public:
    BinaryTree() = default;
    BinaryTree(T t) {this->m_data = t;}
    ~BinaryTree() = default;
    inline void setData(T t) {this->m_data = t;}
    inline T getData() {return this->m_data;}
    inline BinaryTree *left() { return  this->m_left;}
    inline BinaryTree *right() { return  this->m_right;}
    inline void setLeft(BinaryTree *l) {this->m_left = l;}
    inline void setRight(BinaryTree *r) {this->m_right = r;}

    static void preOrder();
    static void postOrder();
    static void inOrder();
    static void runTestCase();
};


#endif //ALGORITHMPRATICE_BINARYTREE_H
