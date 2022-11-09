#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
class Libro{
	public:
	Libro(int _N){
		N=_N;
	}
	int getN(){
		return N;
	}
	void setN(int _N){
		N=_N;
	}
	private:
		int N;
};
class Biblioteca{
	public:
	Biblioteca(stack<Libro> _c,stack<Libro> _f){
		c=_c;
		f=_f;
	}
	void agregarCalculo(Libro C){
		c.push(C);
	}
	void agregarFisica(Libro F){
		c.push(F);
	}
	bool verificarFisica(){
		if(!f.empty()){
			return true;
		}
		else{
			return false;
		}
	}
	void elimininarCalculo(int n){
		stack<Libro> aux;
		for(int i=0;i<c.size();i++){
			if(c.top().getN()!=n){
				aux.push(c.top());
			}
			c.pop();
		}
		c=aux;
	}
	private:
		stack<Libro> c;
		stack<Libro> f;
};
int main(){
	
}
