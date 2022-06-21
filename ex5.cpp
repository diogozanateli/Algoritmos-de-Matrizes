#include <iostream>
using namespace std;

int main (){
	int L, C;
	cin >> L >> C;
	int matriz[L][C];
	for	(int i=0 ; i < L ; i++){
		for(int j=0 ; j < C ; j++){
		cin >> matriz[i][j];
	}
	}
		for	(int i=0 ; i < C ; i++){
		for(int j=0 ; j < L ; j++){
	if(i<C){
	cout << matriz[j][i] << " ";			
	}
    }
    cout << endl;
	}
	return 0;
}
