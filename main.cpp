#include <iostream>
#include <vector>

const int polynomialDegree = 5;

struct Point{
    int x;
    int y;
};

std::vector<Point> inputPoints;
std::vector<Point> functionPoints;

void dump_points(){
    FILE *fp;
    char fname[] = "input.dat";

    std::cout << "fname = " << fname << " dumping data" << std::endl;

    fp = fopen( fname, "w");

    for(int i = 0; i < inputPoints.size(); ++i){
        fprintf(fp, "%f, %f\n", inputPoints[i].x, inputPoints[i].y);
    }
}

void dump_func(){
    FILE *fp;
    char fname[] = "function.dat";

    std::cout << "fname = " << fname << " dumping data" << std::endl;

    fp = fopen( fname, "w");

    for(int i = 0; i < functionPoints.size(); ++i){
        fprintf(fp, "%f, %f\n", functionPoints[i].x, functionPoints[i].y);
    }
}

int main(){

    return 0;
}