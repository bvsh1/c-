#include <iostream>
#include <vector>
using namespace std;
class dron{
	public:
	dron(int _peso,int _velocidad){
		peso=_peso;
		velocidad=_velocidad;
	}
	int getPeso(){
		return peso;
	}
	int getVelocidad(){
		return velocidad;
	}
	void setPeso(int _peso){
		peso=_peso;
	}
	void setVelocidad(int _velocidad){
		velocidad=_velocidad;
	}
	dron(){}
	private:
		int peso,velocidad;
};
dron mayorVelocidad(dron v1){
	
	for(int i=0;i<10;i++){
	}
}
int main(){
	int v,p;
	dron d;	
	vector<dron> v1;
	for(int i=0;i<10;i++){
		cin>>p;
		cin>>v;
		d.setPeso(p);
		d.setVelocidad(v);
		v1.push_back(d);
	}
}
