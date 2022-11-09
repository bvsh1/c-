#include <iostream>
#include <vector>
using namespace std;
class nodo{
	public:
	nodo(int _id,int _costo){
		id=_id;
		costo=_costo;
	}
	int getID(){
		return id;
	}
	int getCosto(){
		return costo;
	}
	void setID(int _id){
		id=_id;
	}
	void setCosto(int _costo){
		costo=_costo;
	}
	void print(){
		cout<<"ID: "<<getID()<<endl<<"Costo: "<<getCosto()<<endl;
	}
	nodo(){}
	private:
		int id,costo;
};
int main(){
	vector<nodo> n1;
	for(int i=0;i<5;i++){
		int d,c;
		cin>>d;
		cin>>c;
		nodo n(d,c);
		n1.push_back(n);
	}
	for(int i=0;i<5;i++){
		nodo n2=n1.at(i);
		n2.print();
	}
}
