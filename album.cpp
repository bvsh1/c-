#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
class cancion{
	public:
	cancion(string _nombre){
		nombre=_nombre;
	}
	string getNombre(){
		return nombre;
	}
	void setNombre(string _nombre){
		nombre=_nombre;
	}
	protected:
		string nombre;
};
class banda{
	public:
		void setNombre(string _nombre){
			nombre=_nombre;
		}
		void setCant(int _cant){
			cant=_cant;
		}
		void setAlbum(vector<cancion> _album){
			album=_album;
		} 
		string getNombre(){
			return nombre;
		}
		int getCant(){
			return cant;
		}
		vector<cancion> getAlbum(){
			return album;
		}
		protected:
			string nombre;
			int cant;
			vector<cancion> album;
};
class banda1: public banda{
	
};
class banda2: public banda{
	
};
int main(){
	banda1 a;
	vector<cancion> the_new_abnormal;
	cancion a1("the adults are talking");
	cancion a2("bad decisions");
	the_new_abnormal.push_back(a1);
	the_new_abnormal.push_back(a2);
	a.setNombre("the strokes");
	a.setCant(4);
	a.setAlbum(the_new_abnormal);
	banda2 b;
	vector<cancion> iowa;
	cancion b1("disasterpiece");
	cancion b2("the heretic anthem");
	iowa.push_back(b1);
	iowa.push_back(b2);
	b.setNombre("slipknot");
	b.setCant(8);
	
}
