#include <bits/stdc++.h>

using namespace std;
int main(){
	string n;
	double sf,tdv;
	cin >> n >> sf >> tdv;
	cout << fixed;
	cout <<"TOTAL = R$ " << setprecision(2) << sf+(tdv*15/100) << endl;
	return 0;
	
	
}
