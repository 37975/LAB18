#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
    double x_1 = R1.x,x_2 = R2.x;
    double y_1 = R1.y,y_2 = R2.y;
    double w_1 = R1.w,w_2 = R2.w;
    double h_1 = R1.h,h_2 = R2.h;
    
    double X_l = max(x_1,x_2), X_r = min(x_1+w_1,x_2+w_2);
    double Y_b = min(y_1,y_2) ,Y_t = max(y_1-h_1,y_2-h_2);
    
    double w_overlap = (X_r - X_l),h_overlap = (Y_t - Y_b);
    
    if(w_overlap <= 0){
        return 0;
    }else{
        return abs(w_overlap*h_overlap);
    }
}