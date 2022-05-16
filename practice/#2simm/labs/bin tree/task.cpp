//
// Created by Cake on 26.04.2022.
//
#include <iostream>
#include <vector>

using namespace std;

struct node{
    node* last;
    node* left = nullptr;
    node* right = nullptr;
    double weight;
};

int count = 0;
node* max_e;
node* min_e;

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



    void push_node(node* temp){
        if(duk == nullptr){
            duk = temp;
            temp->last = nullptr;
        }
        else{
            if (duk->left == nullptr || duk->right == nullptr){
                if(duk->left!= nullptr){
                    duk->right = temp;
                    temp->last = duk;
                }
                else{
                    duk->left = temp;
                    temp->last = duk;
                }
            }
            else{
                node* current;
                count = 0;
                int a = counter(duk->left);
                count = 0;
                int b = counter(duk->right);
                if (a > b){
                    current= find_current(duk->right);
                }
                else{
                    current = find_current(duk->left);
                }

                if(current->left!= nullptr){
                    current->right = temp;
                    temp->last = current;
                }
                else{
                    current->left = temp;
                    temp->last = current;
                }
            }
        }
    }
    node* find_current(node* temp){
        if(temp->left!= nullptr && temp->right!= nullptr){
            find_current(temp->left);
            find_current(temp->right);
        }
        else{
            return temp;
        }
    }

    void output(node* temp, int n){
        int i;
        if (temp != nullptr)
        {
            output(temp->right, n+5);
            for (i = 0; i < n; i++){
                printf(" ");
            }
            double r = temp->weight;
            cout<<r<<"\n";
            output(temp->left, n+5);
        }
    }
    void show(){
        output(duk, 0);
    }

    int counter(node* temp){
        ++count;
        if(temp->left!=nullptr){
            counter(temp->left);
        }
        if(temp->right!=nullptr){
            counter(temp->right);
        }
        return count;
    }


    /*friend ostream& operator<<(ostream& os, bin_tree& p){
        output(p.duk, 0);
        return os;
    }*/

    int operator()(){
        count = 0;
        node* current = duk;
        return counter(current);
    }

    void find_max(node* temp){
        if(temp->weight > max_e->weight){
            max_e = temp;
        }
        if(temp->left!=nullptr){
            find_max(temp->left);
        }
        if(temp->right!=nullptr){
            find_max(temp->right);
        }
        return;
    }
    double max_node(){
        node* current = new node;
        max_e = current;
        max_e->weight = 0;
        find_max(duk);
        return max_e->weight;
    }

    void find_min(node* temp){
        if(temp->weight < min_e->weight){
            min_e = temp;
        }
        if(temp->left!=nullptr){
            find_min(temp->left);
        }
        if(temp->right!=nullptr){
            find_min(temp->right);
        }
    }
    double min_node(){
        node* current = new node;
        min_e = current;
        min_e->weight = 100;
        find_min(duk);
        return min_e->weight;
    }



    int depth(node *temp, int dep_count)
    {
        if(temp == nullptr)
            return dep_count;

        return max(depth(temp -> left,  dep_count+1), depth(temp -> right, dep_count+1));
    }

    node* find_m(node* temp){
        if (temp->left == nullptr)
        {
            return temp;
        }
        return find_m(temp->left);
    }
    node* next_node(node* current){

        if (current->right != nullptr)
        {
            return find_m(current->right);
        }
        node* current_parent = current->last; // родитель рассматриваемого
        while (current_parent != nullptr && current == current_parent->right) // пока узел - правый потомок, переходим на уровень вверх. Узлом становится родитель предыдущего

        {
            current = current_parent;
            current_parent = current_parent->last;
        }
        return current_parent;
    }
    void delete_node(node* temp){
        node* parent = temp->last;
        if(temp->left == nullptr && temp->right == nullptr){
            if(parent->left == temp){
                parent->left = nullptr;
            }
            else{
                parent->right = nullptr;
            }
            delete temp;
    }
        else{
            if((temp->left == nullptr && temp->right != nullptr)||(temp->left != nullptr && temp->right == nullptr)) {
                if(temp->left != nullptr){
                    if(parent->left == temp){
                        parent->left = temp->left;
                    }
                    else{
                        parent->right = temp->left;
                    }
                }
                else{
                    if(parent->left == temp){
                        parent->left = temp->right;
                    }
                    else{
                        parent->right = temp->right;
                    }
                }
            }
            else{
                node* next = next_node(temp);
                temp->weight = next->weight;
                if (next == next->last->left)
                {
                    next->last->left = next->right;
                    if (next->right != nullptr)
                    {
                        next->right->last = next->last;
                    }

                }
                else
                {
                    next->last->right = next->right;
                    if (next->right != nullptr)
                    {
                        next->right->last = next->last;
                    }
                }
                delete next;

            }
        }
    }

};

int main(){
    node* duk = new node;
    duk->weight = 10.5;
    bin_tree v(duk);

    int n;
    double w;
    cin>>n;
    for(int i=0;i<n;++i){
        node* temp = new node;
        cin>>w;
        temp->weight = w;
        v.push_node(temp);
    }
    v.show();
    cout<<endl<<v();
    cout<<endl<<v.min_node();
    v.delete_node(min_e);
    cout<<endl;
    v.show();
}
