#include <iostream>
using namespace std;
int main(){
	int matriz[6][4];
	int maior;
	for(int i=0; i<6 ; i++){
		for(int j=0; j<4 ; j++){
			cin >> matriz[i][j];
		}
	}
	for (int i = 0; i < 6; i++) {
       maior = matriz[i][0];
       for (int j = 0; j < 4; j++) {
       if (matriz[i][j] > maior) {
       maior = matriz[i][j];
       }
       }
      for (int k = 0; k < 4; k++) {
      matriz[i][k] = (matriz[i][k]*maior);
      }
    }
	for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 4; j++) {
          cout << matriz[i][j] << " ";
    }
          cout << endl;
       }
	
	return 0;
}
