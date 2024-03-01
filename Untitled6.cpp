#include <iostream>
#include <string>
using namespace std;


class Panaderia {
	
	public:
		
		string color;
		string tamaño;
		string marca;
		string modelo;
		int año;
		
	Panaderia (string _color, string _tamaño, string _marca, string_modelo, int _año){
		
		color= _color;
		tamaño= _tamaño;
		marca= _marca;
		modelo= _modelo;
		año= _año
	}
	
	void encender(){}
	cout<<"Se encendio"<<endl;
	}
	
	
};

int main (){
	
	Panaderia Horno("Negro", "100cm", "Scross", "Scrip", 2020);
	
	Horno.encender();
	
	return 0; 
}