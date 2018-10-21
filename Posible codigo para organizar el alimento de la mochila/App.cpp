#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int edad, ubicacion, desastre, sexo, peso, altura;
	
	cout<<"Sexo?"<<endl;
	cout<<"1.Hombre 2.Mujer"<<endl;
	cin>>sexo;
	
	cout<<"Que edad tiene?"<<endl;
	cin>>edad;	
	
	if(sexo==1){		//PARA HOMBRES

		if(edad<=3){
			cout<<"Necesita tener alimento suficiente para cubrir unas 3000kcal para tres dias";
		}
		if((edad>=4)&&(edad<=8)){
			cout<<"Necesita tener alimento suficiente para cubrir unas 4200kcal para tres dias";		
		}
		if((edad>=9)&&(edad<=13)){
			cout<<"Necesita tener alimento suficiente para cubrir unas 5400kcal para tres dias";		
		}
		if((edad>=14)&&(edad<=18)){
			cout<<"Necesita tener alimento suficiente para cubrir unas 7200kcal para tres dias";		
		}
		if((edad>=19)&&(edad<=30)){
			cout<<"Necesita tener alimento suficiente para cubrir unas 7800kcal para tres dias";		
		}
		if((edad>=31)&&(edad<=50)){
			cout<<"Necesita tener alimento suficiente para cubrir unas 7200kcal para tres dias";		
		}
		if(edad>50){
			cout<<"Necesita tener alimento suficiente para cubrir unas 6600kcal para tres dias";		
		}
	}
	
	if(sexo==2){		//PARA MUJERES

		if(edad<=3){
			cout<<"Necesita tener alimento suficiente para cubrir unas 3000kcal para tres dias";	
		}
		if((edad>=4)&&(edad<=8)){
			cout<<"Necesita tener alimento suficiente para cubrir unas 4200kcal para tres dias";		
		}
		if((edad>=9)&&(edad<=13)){
			cout<<"Necesita tener alimento suficiente para cubrir unas 4800kcal para tres dias";		
		}
		if((edad>=14)&&(edad<=18)){
			cout<<"Necesita tener alimento suficiente para cubrir unas 6000kcal para tres dias";		
		}
		if((edad>=19)&&(edad<=30)){
			cout<<"Necesita tener alimento suficiente para cubrir unas 6200kcal para tres dias";		
		}
		if((edad>=31)&&(edad<=50)){
			cout<<"Necesita tener alimento suficiente para cubrir unas 6000kcal para tres dias";		
		}
		if(edad>50){
			cout<<"Necesita tener alimento suficiente para cubrir unas 5400kcal para tres dias";		
		}
	}
	
	getch();
	return 0;
}
