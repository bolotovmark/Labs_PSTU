//
// Created by Cake on 26.04.2022.
//
#include <iostream>

using namespace std;

struct node{
    node* last;
    node* left;
    node* right;
    int weight;
};

class bin_tree{
public:
    node* duk; //корень

    bin_tree(){
        duk = nullptr;
    }
    bin_tree(node* temp) {
        duk = temp;
        temp->last = nullptr;
    }


};