#include <iostream>
#include <queue>
using namespace std;
class paciente{
	public:
	paciente(string _nombre,int _nivel){
		nombre=_nombre;
		nivel=_nivel;
	}
	string getNombre(){
		return nombre;
	}
	int getNivel(){
		return nivel;
	}
	void setNombre(string _nombre){
		nombre=_nombre;
	}
	void setNivel(int _nivel){
		nivel=_nivel;
	}
	paciente(){}
	private:
		string nombre;
		int nivel;
};
int main(){
	queue<paciente> q;
	queue<paciente> q1;
	queue<paciente> q2;
	queue<paciente> q3;
	for(int i=0;i<10;i++){
		int n;
		string no;
		cin>>no;
		cin>>n;
		paciente p(no,n);
		q1.push(p);
	}
	for(int i=0;i<10;i++){
		paciente aux=q.front();
		if(aux.getNivel()==1){
			q1.push(aux);
			q.pop();
		}else if(aux.getNivel()==2){
			q2.push(aux);
			q.pop();
		}else if(aux.getNivel()==3){
			q3.push(aux);
			q.pop();
		}
	}
	cout<<"pacientes que fueron ingresados al SAPU"<<endl;
	for(int i=0;i<10;i++){
		if(!q2.empty()){
			paciente b=q2.front();
		cout<<b.getNombre()<<endl;
		q2.pop();
		}
		else if(q2.empty() && !q1.empty()){
			paciente c=q1.front();
			cout<<c.getNombre()<<endl;
			q1.pop();
		}
	}
	cout<<"pacientes que fueron derivados al hospital"<<endl;
	for(int i=0;i<q3.size();i++){
		paciente b=q3.front();
		cout<<b.getNombre()<<endl;
		q3.pop();
	}
}
