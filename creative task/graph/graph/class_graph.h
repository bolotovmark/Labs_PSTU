#pragma once

#include <iostream>
#include <algorithm>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <GL/freeglut.h>
#include <list>


using namespace std;

int INF = 1000000;

struct node;
int name = 0;

struct position{
    GLfloat x;
    GLfloat y;
};

struct tracks{
    node* b_point;
    int weight;
};

struct node{
    list<tracks*> t;
    int name;
    bool visited;
    position pos;
};
class graph{
public:
    list<node*> v;
    int s;
    
    
    
public:
    graph(){
       
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
        name = 0;
    }
    
    void change_count(int n){
        name = 0;
        list<node*> current;
        for (int i = 0; i < n; ++i) {
            node* temp = new node;
            temp->name = name++;
            current.push_back(temp);
            for (int j = 0; j < n; ++j) {
                tracks* track = new tracks;
                track->weight = 0;
                track->b_point = nullptr;
                temp->t.push_back(track);
            }
        }
      
        
        
        this->v = current;
        current.clear();
        
    }

    void add_track(int index1, int index2, int w) {
        auto iter1 = v.begin();
        advance(iter1, index1);

        auto iter2 = v.begin();
        advance(iter2, index2);

        node* temp1 = *iter1;
        node* temp2 = *iter2;

        //cin>>w;
       
        auto iter3 = (temp1->t).begin();
        advance(iter3, index2);

        tracks* track = *iter3;
        track->weight = w;
        track->b_point = temp2;

        /*track = temp2->t[index1];
        track->weight = w;
        track->b_point = temp1;*/

    }

    int* Kommivoyazher() {

        int size = v.size();
        s = 0;
        int** M = new int* [size];
        for (int i = 0; i < size; ++i)
            M[i] = new int[size];

        for (int i = 0; i < v.size(); ++i) {
            auto iter1 = v.begin();
            advance(iter1, i);
            node* temp1 = *iter1;
            for (int j = 0; j < v.size(); ++j) {
                auto iter2 = temp1->t.begin();
                advance(iter2, j);
                tracks* track = *iter2;
                if (i == j) {
                    M[i][j] = INF;
                }
                else {
                    M[i][j] = track->weight;
                }            
            }
            cout << endl;
        }
        
        int*** matrix_solution; 
        int** matrix_temp; 
        int* solution;

        matrix_temp = new int* [size];
        for (int i = 0; i < size; ++i)
            matrix_temp[i] = new int[size];

        solution = new int[size];

        matrix_solution = new int** [size];
        for (int i = 0; i < size; ++i) {
            matrix_solution[i] = new int* [size];
            for (int j = 0; j < size; ++j)
                matrix_solution[i][j] = new int[size];
        }
            
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (M[i][j] == 0) {
                    matrix_solution[i][j] = nullptr;
                }
                matrix_solution[i][j] = new int(M[i][j]);
            }
        }
        for (int l = 0; l < size; l++)
        {
            for (int i = 0; i < size; i++)
            {
                int min = 1000000;
                for (int j = 0; j < size; j++)
                    if (matrix_solution[i][j] && min > *matrix_solution[i][j])
                        min = *matrix_solution[i][j];
                for (int j = 0; j < size; j++)
                    if (matrix_solution[i][j])
                        *matrix_solution[i][j] -= min;
            }
            for (int j = 0; j < size; j++)
            {
                int min = 1000000;
                for (int i = 0; i < size; i++)
                    if (matrix_solution[i][j] && min > *matrix_solution[i][j])
                        min = *matrix_solution[i][j];
                for (int i = 0; i < size; i++)
                    if (matrix_solution[i][j])
                        *matrix_solution[i][j] -= min;
            }

            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                    matrix_temp[i][j] = 0;

            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                {
                    if (matrix_solution[i][j] && !*matrix_solution[i][j])
                    {
                        int hmin = 1000000;
                        int vmin = 1000000;

                        for (int l = 0; l < size; l++)
                            if (l != i && matrix_solution[l][j] && hmin > *matrix_solution[l][j])
                                hmin = *matrix_solution[l][j];

                        for (int l = 0; l < size; l++)
                            if (l != j && matrix_solution[i][l] && vmin > *matrix_solution[i][l])
                                vmin = *matrix_solution[i][l];

                        matrix_temp[i][j] = hmin + vmin;
                    }
                }

            int mcost = 0, mi = 0, mj = 0;
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                    if (matrix_solution[i][j] && mcost < matrix_temp[i][j])
                    {
                        mcost = matrix_temp[i][j];
                        mi = i;
                        mj = j;
                    }
            solution[mi] = mj;

            for (int i = 0; i < size; i++)
                matrix_solution[i][mj] = nullptr;

            for (int i = 0; i < size; i++)
                matrix_solution[mi][i] = nullptr;

            matrix_solution[mj][mi] = nullptr;
        }
        for (int i = 0, j = 0; i < size; i++)
        {
            j = solution[i];
            s += M[i][j];
        }
        int* solv = new int[size];
        solv = solution;
        return solv;
    }
};
