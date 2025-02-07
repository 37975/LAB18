#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect* R1, Rect* R2) {
    double X_l = max(R1->x, R2->x);
    double X_r = min(R1->x + R1->w, R2->x + R2->w);
    double Y_b = min(R1->y, R2->y);
    double Y_t = max(R1->y - R1->h, R2->y - R2->h);

    double w_overlap = X_r - X_l;
    double h_overlap = Y_t - Y_b;

    if (w_overlap <= 0) {
        return 0;
    }else{
        return abs(w_overlap * h_overlap);
    }
}