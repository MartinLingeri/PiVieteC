#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

long double aproximacionPi(int pasos){
    long double resultado= 2*(2/sqrt(2));
    long double raiz=sqrt(2);
    for(int i=0; i<pasos-1; i++){
        for(int j=i; j<pasos-1; j++){
            raiz=sqrt(2+raiz);
        }
        resultado *= (2/raiz);
        raiz=sqrt(2);
    }
    return resultado;
}

int main(){
    int pasos;
    cout<<"Pi="<<setprecision(100)<<M_PI<<endl;
    cout<<"Ingrese la cantidad de pasos de la aproximacion (0 para salir): ";
    cin>>pasos;
    while(pasos!=0){
    	cout<<"\nEl valor aproximado de pi es: "<<setprecision(100)<<aproximacionPi(pasos);
    	cout<<endl;
		cout<<"\nIngrese la cantidad de pasos de la aproximacion (0 para salir): ";
    	cin>>pasos;
	}
	
    return 0;
}
