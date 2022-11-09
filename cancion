#include <iostream>
using namespace std;
class cancion{
	public:
		cancion(string _autor, string _titulo){
			autor=_autor;
			titulo=_titulo;
	}
	string getTitulo(){
		return titulo;
	}
	string getAutor(){
		return autor;
	}
	void setTitulo(string _titulo){
		titulo=_titulo;
	}
	void setAutor(string _autor){
		autor=_autor;
	}
	void print(){
		cout<<"Titulo: "<<getTitulo()<<endl;
		cout<<"Autor: "<<getAutor()<<endl;
	}
	cancion(){}
	private:
		string autor,titulo;
};
int main(){
	string t,a;
	cancion a1[5];
	for(int i=0;i<5;i++){
	cout<<"ingresa el titulo de la cancion(con _ para los espacios)"<<endl;
	cin>>t;
	a1[i].setTitulo(t);
	cout<<"ingresa el autor de la cancion(con _ para los espacios)"<<endl;
	cin>>a;
	a1[i].setAutor(a);
	a1[i].print();
	}
}
