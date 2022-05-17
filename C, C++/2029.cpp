#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //ab area da base
    //alt atura
    double volu, diam, ab, alt;
    while (scanf("%lf %lf", &volu, &diam) != EOF) {
        ab = 3.14 * pow((diam/2),2);
        alt = volu / ab;
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << "ALTURA = " << alt << endl << "AREA = " << ab << endl;
    }
    
    return 0;
}