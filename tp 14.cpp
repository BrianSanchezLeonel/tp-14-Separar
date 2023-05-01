#include<bits/stdc++.h>
using namespace std;
string Separar(string Palabra,string Letra);
int main(){
	string Palabra,Letra;
	cout<<"Ingrese una palabra:"<<endl;
	cin>>Palabra;
	cout<<"Ingrese una letra:"<<endl;
	cin>>Letra;
	string s=Separar(Palabra,Letra);
	cout<<"La palabra separada es:"<<s;
	return 0;
}
string Separar(string Palabra,string Letra){
	string S;
	int i=0;
	for(int i=0;i<Palabra.size();i++){
		S+=Palabra[i];
		S+=Letra;
	}
	return S;
}