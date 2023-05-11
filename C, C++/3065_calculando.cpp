#include <iostream>
#include <string>

using namespace std;

int calculus(string calc, int size){
    int result, results[size], rindex = 0, opindex = 0;
    string num = "", op[size-1];
    for (int i = 0; i < calc.size(); i++) {
        if(calc[i] != 43 && calc[i] != 45){
            num.push_back(calc[i]);
            
        }else{
            op[opindex] = calc[i];
            results[rindex] = stoi(num);
            num = "";
            opindex ++;
            rindex ++;

        }
    }
    results[rindex] = stoi(num);   
    
    result = results[0];
    for(int i = 0;i < size-1;i++){
        if(op[i] == "+"){
            result += results[i+1];
        }else{
            result -= results[i+1];
        }
    }
    return result;
}

int main() {
    int n, t = 1;
    string calc;
    while (cin >> n && n != 0) {
        cin >> calc;
        cout << "Teste " << t << "\n";
        cout << calculus(calc, n) << "\n" << "\n";
        t++;
    }

    return 0;
}
