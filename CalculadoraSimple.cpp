#include <iostream>
using namespace std;

class calculadora{
	private:
		double num1;
		double num2;
		
	public:
		calculadora(double n1, double n2) : num1(n1), num2(n2) {}
		
		double suma(){
			return num1 + num2;
		}
		
		double resta(){
			return num1 - num2;
		}
		
		double multi(){
			return num1 * num2;
		}
		
		double div(){
			if(num2 != 0){
				return num1 / num2;
			}else{
				cout << "La division por cero no existe.";
				return 0;
			}
		}
};

int main(){
	calculadora calcu(5.0, 2.0);
	cout << "Suma: " << calcu.suma() << endl;
	cout << "Resta: " << calcu.resta() << endl;
	cout << "Multiplicacion: " << calcu.multi() << endl;
	cout << "Division: " << calcu.div() << endl;
}