#include <iostream>
using namespace std;
int main(){
	int N;
	float soma=0, cont=0;
	cin >> N;
	int matriz[N][N];
	for(int i=0 ; i<N ; i++){
		for(int j=0 ; j<N ; j++){
			cin >> matriz[i][j];
		}
	}
	for(int i=0 ; i<N ; i++){
		for(int j=0 ; j<N ; j++){
			if(i==j){
				soma+=matriz[i][j];
				cont++;
			}
		}
	}
	cout << soma/cont << endl;	
	return 0;
}
