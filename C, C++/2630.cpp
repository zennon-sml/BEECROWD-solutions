#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int t, i;
    double r, g, b, rgb;
    string kind;
    cin >> t;
    for (i = 1;i <= t;i++) {
        cin >> kind >> r >> g >> b;
        if (kind == "min") {
            rgb = min(r,(min(g,b)));
        }else if(kind == "max"){
            rgb = max(r,(max(g,b)));
        }else if (kind == "eye") {
            r = r*0.30;
            g = g*0.59;
            b = b*0.11;
            rgb = r + g + b;
        }else {
            rgb = (r + g + b)/3;
        }
        //cout.precision(0);
        //cout.setf(ios::fixed);
        cout <<"Caso #" << i << ": " << int(rgb) << endl;
    }
    

    return 0;
}