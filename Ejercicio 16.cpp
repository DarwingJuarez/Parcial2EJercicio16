//Evaluar la funcion Y=5X^2 + 3x + 8 cuando X -> -3...10
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int a=5, b=3, c=8;
	int resultado;
	
	cout<<"Y=5X^2 + 3x + 8\n\n";
	for(int x = -3; x <= 10; x++){
    	cout<<"Y=5("<<x<<")^2+3("<<x<<")+8"<<endl;
    	
		resultado = ((x*x)*a )+((x)*b)+c;
		
		cout<<"RESULTADO: "<<resultado<<"\n\n";
	}
	
	
	getch();
	return 0;
}
