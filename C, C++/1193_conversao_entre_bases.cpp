#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    int n, i, con;
	string type, num;
	cin >> n;
	for(i = 0;i < n; i++){
	    cin >> num >> type;
		stringstream stream;
		printf("Case %d:\n", i);
		if(type == "bin"){
			stream << num;
			stream >> con;
			printf("%d dec\n", con);
			printf("%X hex\n", con);
		}else if(type == "dec"){
		    stream << num;
			stream >> con;
			printf("%X hex\n", con);
			printf("%d bin\n", con);
		}else{
			stream << num;
			stream >> hex >> con;
			printf("%d dec\n", con);
			printf("%d bin\n", con);
		}
	}
    
return 0;
}
