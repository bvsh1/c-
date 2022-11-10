#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
class seccionesPA{
	public:
		void agregarSeccion(string codseccion,int cuposseccion){
		map<string,int>:: iterator it;
		vector<string> aux;
			if(cuposeccion.size()!=0){
				cuposeccion.insert(make_pair(codseccion,cuposseccion));
				alumnosseccion.insert(make_pair(codseccion,aux));
			}
			else{
				it=cuposeccion.find(codseccion);
				if(it!=cuposeccion.end()){
					cout<<"la seccion ya existe"<<endl;
				}else{
					cuposeccion.insert(make_pair(codseccion,cuposseccion));
					alumnosseccion.insert(make_pair(codseccion,aux));
				}
			}
		}	
		bool agregarAlumno(string codseccion,string rutalumno){
			map<string,int>:: iterator it;
			map<string,vector<string> >:: iterator it1;
			it=cuposeccion.find(codseccion);
			if(it!=cuposeccion.end()){
				it1=alumnosseccion.find(codseccion);
				if(it1->second.size()< it->second){
					it1->second.push_back(rutalumno);
				}
				return true;
			}else{
				return false;
			}
		}	
		void imprimirLista(string codseccion){
			map<string,vector<string> >:: iterator it;
			it=alumnosseccion.find(codseccion);
			if(it!=alumnosseccion.end()){
				for(int i=0;i<it->second.size();i++){
					cout<<it->second.at(i)<<endl;
				}
			}
		}
	private:
		map<string,int> cuposeccion;
		map<string,vector<string> > alumnosseccion;
};
int main(){
}
