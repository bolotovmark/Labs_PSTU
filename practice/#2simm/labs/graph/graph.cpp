//
// Created by Cake on 07.05.2022.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

struct node;
int name = 0;

struct tracks{
    node* b_point;
    int weight;
};

struct node{
    vector<tracks*> t;
    int name;
    bool visited;
};

class graph{
    vector<node*> v;
public:
    graph(){
        node* temp = new node;
        temp->name = name++;
        v.push_back(temp);
    }

    graph(int n){
        for(int i=0;i<n;++i){
            node* temp = new node;
            temp->name = name++;
            v.push_back(temp);
            for (int j = 0; j < n; ++j) {
                tracks* track = new tracks;
                track->weight = 0;
                track->b_point = nullptr;
                temp->t.push_back(track);
            }
        }

    }

    void add_track(int index1, int index2) {
        node* temp1 = v[index1];
        node* temp2 = v[index2];
        int w = 1;
        //cin>>w;
        tracks* track = temp1->t[index2];
        track->weight = w;
        track->b_point = temp2;

        /*track = temp2->t[index1];
        track->weight = w;
        track->b_point = temp1;*/

    }

    void show(){
        cout<<"№ ";
        for_each(v.begin(), v.end(), [](node* temp){
            cout<<temp->name<<" ";
        });
        cout<<endl;
        for_each(v.begin(), v.end(), [](node* temp){
            cout<<temp->name<<" ";
            for_each((temp->t).begin(), (temp->t).end(), [](tracks* track){
                cout<<track->weight<<" ";
            });
            cout<<endl;
        });
    }

    void dfs_rec(int index){
        node* temp = v[index];
        temp->visited = true;
        cout<<temp->name<<"->";

        for(int i = 0; i!=(temp->t).size(); ++i){
            if((temp->t)[i]->b_point != nullptr){
                if(!(temp->t)[i]->b_point->visited){
                    dfs_rec(i);
                }
            }
        }
    }
    void dfs(int index){
        dfs_rec(index);
        for_each(v.begin(), v.end(), [](node* temp){
            temp->visited = false;
        });
    }

    void bfs_rec(vector<node*>& bfs){

        vector<node*> buffer;
        for_each(bfs.begin(), bfs.end(), [&buffer](node* temp){
            cout<<temp->name<<"->";
            temp->visited = true;
            for_each((temp->t).begin(), (temp->t).end(), [&buffer](tracks* track){
                if(track->b_point != nullptr){
                    if(!track->b_point->visited){
                        buffer.push_back(track->b_point);
                    }
                }
            });
        });
        bfs.clear();
        if(buffer.size()==0){
            return;
        }
        else{
            bfs_rec(buffer);
        }
    }

    void bfs(int index){
        vector<node*> bfs;
        node* temp = v[index];
        temp->visited = true;
        cout<<temp->name<<"->";

        for(int i = 0; i!=(temp->t).size(); ++i){
            if((temp->t)[i]->b_point != nullptr){
                if(!(temp->t)[i]->b_point->visited){
                    bfs.push_back((temp->t)[i]->b_point);
                }
            }
        }
        bfs_rec(bfs);
        for_each(v.begin(), v.end(), [](node* temp){
            temp->visited = false;
        });
    }

    void Dijkstras(int index){
        vector<int> s(v.size());
        node* temp = v[index];
        temp->visited = true;

    }

};

int main(){
    SetConsoleOutputCP(CP_UTF8);
    graph test(7);
    test.add_track(0, 1);
    test.add_track(0, 4);
    test.add_track(1, 3);
    test.add_track(2, 0);
    test.add_track(3, 0);
    test.add_track(3, 5);
    test.add_track(3, 6);
    test.add_track(6, 1);
    test.show();
    test.dfs(0);
    cout<<endl;
    test.dfs(2);
    cout<<endl;
    test.bfs(0);
}