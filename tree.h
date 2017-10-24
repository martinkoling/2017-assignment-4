#ifndef TREE_H
#define TREE_H
#include <iostream>
using std::cout;

#include <memory>
using std::unique_ptr;

#include "treenode.h"

template <typename T>
class BinarySearchTree{

private:

    unique_ptr<TreeNode<T>> root;

public:

    void write(ostream & o) const {
        root->write(o);
    }

    TreeNode<T>* insert(T it){

        TreeNode<T>* current = root.get();

        if(current == nullptr){
            TreeNode<T>* newNode = new TreeNode<T>(it);
            newNode->leftChild = nullptr;
            newNode->rightChild = nullptr;

            root.reset(newNode);
            current = newNode;
            return newNode;
            
        }
        else {
             current = root.get();
            
     while(current != nullptr) {


         if (it < current->data) {
             if (current->leftChild == nullptr) {
                 TreeNode<T>* newNode = new TreeNode<T>(it);
                 current->setLeftChild(newNode);
                 current = newNode;
                 return newNode;

             } else {
                 current = current->leftChild.get();

             }

         } else if (current->data < it) {
             if (current->rightChild == nullptr) {
                 TreeNode<T>* newNode = new TreeNode<T>(it);
                 current->setRightChild(newNode);
                 current = newNode;
                 return newNode;

             } else {
                 current = current->rightChild.get();

             }

         } else {
             return current;

         }


     }


        }
    }

    TreeNode<T>* find(T item){

        TreeNode<T>* current = root.get();
        T currentData = current->data;

        while(currentData != item){

            

        }




    }

};




// do not edit below this line

#endif
