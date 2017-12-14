#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <map>
#include <algorithm>
#include <string>
#include "Point.h"


using namespace std;
const int N=5;

Point printv(vector<Point> A) {
    cout << endl;
    for (int i=0; i<A.size(); i++){
        A[i].print();
    }
}


void closest(vector<Point>A) {
    cout << endl;
    double min=A[0].r;
    int k=0;
    for (int i=0; i<A.size(); i++) {
        if (A[i].r < min) {
            min =  A[i].r;
            k=i;
        }
    }
    cout << "The closest point is" << endl;
    A[k].print();
}


void corners(vector <Point>A, double a, double b, double c) {
    cout << endl;
    cout << endl;
    double min=999999;
    int k=0;
    for (int i=0; i<A.size(); i++) {
        double R = sqrt( ((A[i].x - a)*(A[i].x - a)) + ((A[i].y - b)*(A[i].y - b)) + ((A[i].z - c)*(A[i].z - c)));
        if (R < min) {
            min =  R;
            k=i;

        }
    }
    cout << "-100, -100, -100" << endl;
    A[k].print();
}
int main() {


srand(time(0));
vector <Point> A(N);


    printv(A);
    closest(A);
    corners(A, -100, -100, -100);

    sort(A.begin(), A.end());

    printv(A);

    map <int, Point> M;

    for (int i = 0; i < A.size(); i++) {
        M.emplace( (i+1), A[i] );
    }

    cout << endl;
    for (auto& x: M) {
        cout << " (" << x.first << ") " << x.second  << endl;
    }


    return 0;
}