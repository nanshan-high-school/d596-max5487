#include <iostream>
using namespace std;
int main() {
	int	ntonnt[4] = {0}, bomb[10] = {1,2,3,4,5,6,7,8,9}, times;
	cin >> times;
	for ( int i = 0; i < times; i++){
		for (int o = 0; o <times; o++){
		cin >> ntonnt[o]w;
		}
		for ( int q = 1; q < 10 ;q++){
			if ( bomb[q - 1] == ntonnt[0] || bomb[q + 1] == ntonnt[0] ||bomb[q - 3] == ntonnt[0] || bomb[q + 3] == ntonnt[0] ){
				if ( bomb[q - 1] != ntonnt[1] || bomb[q + 1] != ntonnt[1] ||bomb[q - 3] != ntonnt[1] || bomb[q + 3] != ntonnt[1]){
					if ( bomb[q - 1] != ntonnt[2] || bomb[q + 1] != ntonnt[2] ||bomb[q - 3] != ntonnt[2] || bomb[q + 3] != ntonnt[2]){
						cout << bomb[q] << " ";
					}
					else {
						cout << "Empty"; 
					}
				cout << "Empty";
				}
			cout << "Empty";
			}
		}
	}
	return 0;
    }
