
#include <iostream>
#include <math.h>
#include <complex>
#include <iomanip>
using namespace std;

/*
//2.1
int main() {
	float a, b, c, d, e, f;
	cout << "Calcular x e y" << endl << "ax + by = c" << endl << "dx + ey = f" << endl;
	cout << "a?";
	cin >> a;
	cout << "b?";
	cin >> b;
	cout << "c?";
	cin >> c;
	cout << "d?";
	cin >> d;
	cout << "e?";
	cin >> e;
	cout << "f?";
	cin >> f;
	float x, y;
	if ((a*e - b*d) == 0){
		if (((c*e - b*f) == 0) || ((a*f - c*d) == 0)){
			cout << "Sistema indeterminado";
		}
		else{
			cout << "Sistema impossível, divisão por zero";
		}
	}

	else{
		x = (float) (c*e - b*f) / (a*e - b*d);
		y = (float) (a*f - c*d) / (a*e - b*d);
		cout << "x=" << x << endl << "y=" << y;
	}
	return 0;
}
*/

/*
//2.2 a)
int main(){
	float a, b, c, max, min;
	cout << "Introduzir três números:";
	cin >> a >> b >> c;
	max = min = a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	cout << "Máximo:" << max << endl << "Mínimo:" << min;
	return 0;
}
*/

/*
//2.2 b)
int main(){
	float a, b, c, max, min, med;
	cout << "Introduzir três números:";
	cin >> a >> b >> c;
	max = min = a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	if ((min!=a)&&(max!=a))
		med=a;
	if ((min!=b)&&(max!=b))
			med=b;
	if ((min!=c)&&(max!=c))
			med=c;
	cout << "Ordem decrescente de valor: " << max << " " << med << " " << min;
	return 0;
}
*/

/*
//2.2 c)
int main(){
	double a, b, c, max, valor1, valor2;
	cout << "Introduzir três números:";
	cin >> a >> b >> c;
	max = a;
	valor1 = b;
	valor2 = c;
	if(b>max){
		max=b;
		valor1=a;
	}
	if(c>max){
		max=c;
		valor2 = a;
	}
	if((valor1 + valor2) > max){
		cout << "É um triângulo!";
	}
	else{
		cout << "Não é um triângulo!";
	}
	return 0;
}
*/

/*
//2.3
int main(){
	float a, b;
	char op;
	cin >> a >> op >> b;
	switch(op){
	case '+':
		cout << a << op << b << "=" << a+b;
		break;
	case '-':
		cout << a << op << b << "=" << a-b;
		break;
	case '*':
		cout << a << op << b << "=" << a*b;
		break;
	case '/':
		cout << a << op << b << "=" << (float) a/b;
	}
}
*/

/*
//2.4
int main(){
	float peso, preco;
	cout << "Introduzir peso da mercadoria";
	cin >> peso;
	if(peso<500)
		preco = 5;
	else if((peso>=500)&&(peso<=1000))
		preco = 5 + (1.5 * (ceil((peso-500)/100)));
	else if(peso>1000)
		preco = 12.5 + 5 * (ceil((peso-1000)/250));
	cout << "Preço=" << preco << " euros";
	return 0;
}
*/

/*
//2.6
int main(){
	float a, b, c;
	cout << "Introduza os coeficientes (a b c): ";
	cin >> a >> b >> c;
	float x1, x2;
	x1= (-b + (sqrt(pow(b,2) - 4*a*c)))/(a*2);
	x1= (-b - (sqrt(pow(b,2) - 4*a*c)))/(a*2);
	if(x1 == x2){
		cout << "A equação tem duas raízes reais iguais: ";
		cout << fixed << setprecision(3) << x1 << " e " << x2;
	}
	else{
		cout << "A equação tem duas raízes reais diferentes: ";
		cout << fixed << setprecision(3) << x1 << " e " << x2;
	}
	return 0;
}
*/

//2.

