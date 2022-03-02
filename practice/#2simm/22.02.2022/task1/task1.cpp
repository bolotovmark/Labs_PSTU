//
// Created by Cake on 17.02.2022.
//
#include <iostream>

using namespace std;
int n = 20;

bool tracer(int x1, int y1, int x2, int y2){
    int dx, dy;
    if ((x1 == x2) || (y1 == y2)){
        return true;
    }
    dx = x1-1;
    dy = y1-1;
    while ((dx>=1)&&(dy>=1)){
        if ((dx == x2)&&(dy==y2)){
            return true;
        }
        dx--;
        dy--;
    }
    dx = x1+1;
    dy = y1+1;
    while ((dx<=n)&&(dy<=n)){
        if ((dx == x2)&&(dy==y2)){
            return true;
        }
        dx++;
        dy++;
    }
    dx = x1+1;
    dy = y1-1;
    while ((dx<=n)&&(dy>=1)){
        if ((dx == x2)&&(dy==y2)){
            return true;
        }
        dx++;
        dy--;
    }
    dx = x1-1;
    dy = y1+1;
    while ((dx>=1)&&(dy<=n)){
        if ((dx == x2)&&(dy==y2)){
            return true;
        }
        dx--;
        dy++;
    }
    return false;

}

bool check_new(int a[], int p){
    int px, py, x, y;
    int i;
    px = a[p];
    py = p;
    for (i = 1; i <= p - 1; i++)
    {
        x = a[i];
        y = i;
        if (tracer(x, y, px, py))
            return true;
    }
    return false;
}

void draw(int b[]){
    int d1, d2, d3, d4, x, y;
    int **a = new int*[n];

    for(int i=0; i<n;++i){
        a[i] = new int [n];
        for (int j=0; j<n;j++){
            a[i][j] = 0;
        }
    }
    for(int t=1;t<=n;t++){
        y=t-1;
        x=b[t]-1;

        for (int i = 0; i < n; ++i) {
            a[i][y] = 1;
            a[x][i] = 1;
        }
        d1 = n - y - 1;
        d4 = n - x - 1;
        d3 = n - 1 - d1;
        d2 = n - 1 - d4;
        if (d1 < d2) {
            for (int g = 1; g < (d1 + 1); g++) {
                a[x - g][y + g] = 1;
            }
        } else {
            for (int g = 1; g < (d2 + 1); g++) {
                a[x - g][y + g] = 1;
            }
        }
        if (d2 < d3) {
            for (int g = 1; g < (d2 + 1); g++) {
                a[x - g][y - g] = 1;
            }
        } else {
            for (int g = 1; g < (d3 + 1); g++) {
                a[x - g][y - g] = 1;
            }
        }
        if (d3 < d4) {
            for (int g = 1; g < (d3 + 1); g++) {
                a[x + g][y - g] = 1;
            }
        } else {
            for (int g = 1; g < (d4 + 1); g++) {
                a[x + g][y - g] = 1;
            }
        }
        if (d4 < d1) {
            for (int g = 1; g < (d4 + 1); g++) {
                a[x + g][y + g] = 1;
            }
        } else {
            for (int g = 1; g < (d1 + 1); g++) {
                a[x + g][y + g] = 1;
            }
        }
        a[x][y] = 9;

    }
    for(int i=0; i<n;++i){
        for(int j=0; j<n; ++j){
            cout<<a[i][j]<<"  "; }
        cout<<endl;
    }
    cout<<endl;
    for (int count = 0; count < n; count++)
        delete [] a[count];

}

int main(){
    int solve[n];
    int p=1, c=0;

    while (p>0){
        solve[p]=solve[p]+1;
        if (p==n){
            if (solve[p]>n){
                while (solve[p]>n){
                    p--;
                }
            }
            else {
                if (!check_new(solve,p)){
                    draw(solve);
                    c++;
                    p--;

                }
            }
        }
        else{
            if (solve[p]>n){
                while(solve[p]>n){
                    p--;
                }
            }
            else{
                if(!check_new(solve, p)){
                    p++;
                    solve[p]=0;
                }
            }
        }
    }

    cout<<endl<<c;

}