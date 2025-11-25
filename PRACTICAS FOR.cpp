#include <iostream>
using namespace std;
int main(){
	int matriz[2][3];
	cout<<"LLene la matriz 2x2\n";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<"Ingrese matriz["<<i<<"]["<<j<<"]:"<<endl;
			cin>>matriz[i][j];
		}
	}
}
