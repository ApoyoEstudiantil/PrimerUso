#include <iostream>
using namespace std;
class calculadora{
	public:
		float valor1, valor2;
		calculadora(){
		valor1 = valor2 = 0;
		}
		
		void Suma();
		void Resta();
		void Multiplicacion();
		void Division();
		void Menu();
};

void calculadora::Menu(){
	int op;
	cout<<"Menu principal!"<<endl;
	
	
		cout<<"1-Suma"<<endl;
		cout<<"2-Resta"<<endl;
		cout<<"3-Multiplicacion"<<endl;
		cout<<"4-Division"<<endl;
		cout<<"5-Division"<<endl;
		
		cout<<"Seleccione la opción de operacion:"<< endl;
		cin>>op;
		
		if(op==1){
		 Suma();
		}else if(op==2){
			 Resta();
		}else if(op==3){
			 Multiplicacion();
		}else if(op==4){
		Division();
		}
		
		
}
void calculadora::Suma(){
	float resultado;
	
	cout<<"---------------------------------------------------"<<endl;
	cout<<"Realizacion de sumas"<<endl;
	cout<<"ingresa el primer valor"<<endl;
	cin>>valor1;
	cout<<"ingresa el primer valor"<<endl;
	cin>>valor2;
	resultado = valor1+valor2;
	cout<<"El resultado es "<<resultado<<endl;
	cout<<"---------------------------------------------------"<<endl;
	Menu();
	
}
void calculadora::Resta(){
	float resultado;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"Realizacion de sumas"<<endl;
	cout<<"ingresa el primer valor"<<endl;
	cin>>valor1;
	cout<<"ingresa el primer valor"<<endl;
	cin>>valor2;
	resultado = valor1-valor2;
	cout<<"El resultado es "<<resultado<<endl;
	cout<<"---------------------------------------------------"<<endl;
	Menu();
	
}
void calculadora::Multiplicacion(){
	float resultado;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"Realizacion de sumas"<<endl;
	cout<<"ingresa el primer valor"<<endl;
	cin>>valor1;
	cout<<"ingresa el primer valor"<<endl;
	cin>>valor2;
	resultado = valor1*valor2;
	cout<<"El resultado es "<<resultado<<endl;
	cout<<"---------------------------------------------------"<<endl;
	Menu();
	
}
void calculadora::Division(){
	float resultado;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"Realizacion de sumas"<<endl;
	cout<<"ingresa el primer valor"<<endl;
	cin>>valor1;
	
	if(valor1==0 ){
		cout<<"No se puede divir entre 0"<<endl;
		Division();
	}
	cout<<"ingresa el primer valor"<<endl;
	cin>>valor2;
	if(valor2==0 ){
		cout<<"No se puede divir entre 0"<<endl;
		Division();
	}
	
	if(valor2!=0 && valor1 !=0){
		resultado = valor1/valor2;
	cout<<"El resultado es "<<resultado<<endl;
	cout<<"---------------------------------------------------"<<endl;
	Menu();
	
	}

	
}

int main(){
	calculadora *obj=new calculadora(); 
	obj->Menu();
	return 0;
}
