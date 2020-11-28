#include<iostream>
using namespace std;
class figuras{
	public:
		float lado, lado2, altura,base,d1,d2;
		figuras(){
			lado=altura=base=altura=d1=d2=0;
		}
		void Menu();
		void areaCuadrado(float a);
		void areaRectangulo(float a, float b);
		void areaTriangulo(float a, float b);
		void areaRombo(float a, float b);
		
		void perimetroCuadrado(float a);
		void perimetroRectangulo(float a, float b);
		void perimetroTriangulo(float a);
		void perimetroRombo( float b);
		
		// perimetro del isoceles
		void perimetroTriangulo_isoceles(float a, float b);
		
		//perimetro escaleno
		void perimetroTriangulo_escaleno(float a, float b, float c);
};



void figuras::Menu(){
	int opc;
	cout<<"Figuras geometricas \n"<<endl;
	cout<<"1- Cuadrado"<<endl;
	cout<<"2- Rectangulo"<<endl;
	cout<<"3- Triangulo"<<endl;
	cout<<"4- Rombo"<<endl;
	cout<<"5- Salir"<<endl;
	cout<<"¿Cual es la opcion a realizar?"<<endl;
	cin>>opc;
	
	if(opc==1){
		 cout<<"--------------------------------------------------"<<endl;
		cout<<"Ingresa el lado del cuadrado"<<endl;
		cin>>lado;
		 areaCuadrado(lado);
		 perimetroCuadrado(lado);
		 cout<<"--------------------------------------------------"<<endl;
		 Menu();
	}else if(opc==2){
		 cout<<"--------------------------------------------------"<<endl;
		cout<<"Ingresa la base"<<endl;
		cin>>base;	
		cout<<"Ingresa la altura"<<endl;
		cin>>altura;	
		areaRectangulo(base,altura);
		perimetroRectangulo(base,altura);
		cout<<"--------------------------------------------------"<<endl;
		Menu();
	} else if(opc==3){
		 cout<<"--------------------------------------------------"<<endl;
		int opc2;
		cout<<"1- Equilatero"<<endl;
	    cout<<"2- Escaleno"<<endl;
	    cout<<"3- Isoceles"<<endl;
	    cout<<"4- Menu inicial"<<endl;
	    cout<<"5- salir"<<endl;
	    cin>>opc2;
	    
	    
	    
	    if(opc2==1){
	    		 cout<<"--------------------------------------------------"<<endl;
		cout<<"Ingresa la base"<<endl;
		cin>>base;	
		cout<<"Ingresa la altura"<<endl;
		cin>>altura;
		cout<<"Ingresa el lado"<<endl;
		cin>>lado;	    	
	    	perimetroTriangulo(lado);
            areaTriangulo(base, altura);
            cout<<"--------------------------------------------------"<<endl;
		Menu();
		}else if(opc2==2){
	    	cout<<"--------------------------------------------------"<<endl;
		cout<<"Ingresa la base"<<endl;
		cin>>base;	
		cout<<"Ingresa el lado 1"<<endl;
		cin>>lado;
		cout<<"Ingresa el lado 2"<<endl;
		cin>>lado2;
	    cout<<"Ingresa la altura"<<endl;
		cin>>altura;
			areaTriangulo(base, altura);
	    	perimetroTriangulo_escaleno(lado, lado2, base);
	    	
	    	cout<<"--------------------------------------------------"<<endl;
		Menu();
		}else if(opc2==3){
		cout<<"--------------------------------------------------"<<endl;
		cout<<"Ingresa la base"<<endl;
		cin>>base;	
		cout<<"Ingresa el lado"<<endl;
		cin>>lado;	
		cout<<"Ingresa la altura"<<endl;
		cin>>altura;
			areaTriangulo(base, altura);
			perimetroTriangulo_isoceles(lado, base);
	    	cout<<"--------------------------------------------------"<<endl;
		Menu();
		}else if(opc2==4){
	    	Menu();
		}else if(opc2==5){
	    	exit(0);
		}
	    
	    
		
	    cout<<"--------------------------------------------------"<<endl;
	    Menu();
	}if(opc==4){
		 cout<<"--------------------------------------------------"<<endl;
		cout<<"Ingresa el diametro mayor"<<endl;
		cin>>d1;	
		cout<<"Ingresa el diametro menor"<<endl;
		cin>>d2;
		cout<<"Ingresa el lado del rombo"<<endl;
		cin>>lado;	
		perimetroRombo(lado);
        areaRombo(d1, d2);
		cout<<"--------------------------------------------------"<<endl;
		Menu();	
	}else if(opc==5){
	exit(0);
	}
		
}

void figuras::areaCuadrado(float lad){
	float area;
	area = lad*2;
	cout<<"El area del cuadrado es "<<area<<endl;
	
}
void figuras::perimetroCuadrado(float perimetro1){
	float perimetro;
	perimetro = perimetro1*4;
	cout<<"El perimetro del cuadrado es "<<perimetro<<endl;
	}




void figuras::perimetroRectangulo(float b1, float b2){
	float resultado;
	resultado = (b1*2)+(b2*2);
	if(b1==b2){
		cout<<"No es un Rectangulo es un cuadrado"<<endl;
		Menu();
	}else{
		cout<<"El perimetro del Rectangulo "<<resultado<<endl;
	}
	
}

void figuras::areaRectangulo(float b, float a){
	float resultado;
	resultado = b*a;
	if(b==a){
		cout<<"No es un Rectangulo es un cuadrado"<<endl;
		Menu();
	}else{
		cout<<"El area del Rectangulo "<<resultado<<endl;
	}
	
}

void figuras::areaRombo(float d1, float d2){
	float resultados;
	resultados = (d1*d2)/2;
	cout<<"El area del rombo es "<<resultados<<endl;
	}
	
void figuras::perimetroRombo(float lado){
	float resultados;
	resultados = lado*4;
	cout<<"El area del rombo es "<<resultados<<endl;
	}


void figuras::perimetroTriangulo(float lado){
	float resultado;
	resultado = lado*3;
	cout<<"El perimetro es "<<resultado<<endl;
}


void figuras::perimetroTriangulo_isoceles(float a, float b){
	float resultado;
	resultado = (a*2)+base;
	cout<<"El perimetro es "<<resultado<<endl;
}

void figuras::areaTriangulo(float b, float a){
	float resultado;
	resultado = (b*a)/2;
	cout<<"El area es "<<resultado<<endl;
}
void figuras::perimetroTriangulo_escaleno(float lu, float ld, float b){
	float resultado;
	resultado = lu+ld+b;
	cout<<"El resultado del perimetro es: "<<resultado<<endl;
}

int main(){
	figuras *obj=new figuras();
	obj->Menu();
	return 0;
}
