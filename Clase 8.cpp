#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

void CargarSeries(string Series[50]){
	int ser;
	int S;
	// Utilizo una estructura repetitiva para recorrer la variable dimensionada
	cout<<system("cls")<<endl;
	cout<<"Ingresar los nombres de las series"<<endl;
	for (ser=0;ser<=49;ser++){
		do {
			cout<<"Ingrese nombre de la serie n°: "<<ser+1<<": ";
			cin>>Series[ser];
			
			S=0;
		} while(ser>0 and S<ser and Series[ser]!="");{
			if (Series[ser]==Series[S]){
				Series[ser] = "";
				cout<<"La serie ya ha sido ingresada"<<endl;
			}
			else {
				S=S+1;
			}
		}while (Series[ser]=="");
	} 
}

void AutoTemp(string Temp[15]){
	
	Temp[0]="Temporada 1";
	Temp[1]="Temporada 2";
	Temp[2]="Temporada 3";
	Temp[3]="Temporada 4";
	Temp[4]="Temporada 5";
	Temp[5]="Temporada 6";
	Temp[6]="Temporada 7";
	Temp[7]="Temporada 8";
	Temp[8]="Temporada 9";
	Temp[9]="Temporada 10";
	Temp[10]="Temporada 11";
	Temp[11]="Temporada 12";
	Temp[12]="Temporada 13";
	Temp[13]="Temporada 14";
	Temp[14]="Temporada 15";
	
}
void AutoCap(string Cap[10]){
	
	Cap[0]="1";
	Cap[1]="2";
	Cap[2]="3";
	Cap[3]="4";
	Cap[4]="5";
	Cap[5]="6";
	Cap[6]="7";
	Cap[7]="8";
	Cap[8]="9";
	Cap[9]="10";
	
}
