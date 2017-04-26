
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
//2.5
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

//2.6 a)
//int main(){
//	int n, sum;
//	sum = 0;
//	cout << "Number? ";
//	cin >> n;
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i == 0)
//			sum= sum + 1;
//	}
//	if(sum == 0)
//	cout << "Prime!";
//	else{
//		cout << "Not prime!";
//	}
//}

//2.6 b)
//int main(){
//	int n, sum;
//	n= 2;
//	int j=1;
//	while(j<=100){
//		sum = 0;
//		for(int i=2; i<=sqrt(n); i++){
//			if(n%i == 0)
//				sum = sum +1;
//		}
//		if (sum == 0){
//		cout << n << endl;
//		j= j+1;
//	}
//	n= n + 1;
//	}
//}

//2.6 c)
//int main(){
//	int n, sum;
//	for(n=2; n<1000; n++){
//		sum = 0;
//		for(int i=2; i<=sqrt(n); i++){
//			if(n%i == 0){
//				sum = sum + 1;
//			}
//		}
//		if (sum == 0){
//			cout << n << endl;
//		}
//	}+
//}

//2.7 a)
//int main(){
//	float pi = 3.14159265354;
//	cout << "ang  " << "sin       " << "cos       " << "tan" << endl;
//	for(int a=0; a<=90; a = a+15){
//		float b= (a*pi)/180.0;
//		cout << fixed << setprecision(6) << a <<"  "<< sin(b) << "  " << cos(b) << "  " << tan(b) << endl;
//	}
//}

//2.7 b)
/*int main(){
	float start, end, inc;
	float pi = 3.14159265354;
	cout << "Start? " << endl;
	cin >> start;
	cout << "End? " << endl;
	cin >> end;
	cout << "Increment? ";
	cin >> inc;
	cout << "ang  " << "sin       " << "cos       " << "tan" << endl;
	for(float a=start; a<=end; a = a+inc){
		float b= (a*pi)/180.0;
		cout << fixed << setprecision(6) << a <<"  "<< sin(b) << "  " << cos(b) << "  " << tan(b) << endl;
	}
}*/

//2.9 a)
//int main(){
//	int i=0;
//	float max, min, sum;
//	float n;
//	cout << "Introduzir sequência ";
//	cin >> n;
//	sum = 0;
//	max = n;
//	min = n;
//	while(n != 0){
//		if(n<min){
//			min = n;
//		}
//		if(n>max){
//			max = n;
//		}
//		sum = sum + n;
//		i= i +1;
//		cin >> n;
//	}
//	float med= sum/i;
//	cout << "Média= " << med << endl << "Soma total= " << sum << endl << "Mínimo= " << min << endl << "Máximo " << max;
//}

//2.9 b)
//int main(){
//	int i;
//	cout << "Sequence length? ";
//	cin >> i;
//	float max, min, sum, n;
//	sum= 0;
//	cout << "Sequence: ";
//	cin >> n;
//	max = n;
//	min = n;
//	sum = n;
//	for(int t=1; t<i; t++){
//		cin >> n;
//		if(n<min){
//			min = n;
//		}
//		if(n>max){
//			max = n;
//		}
//		sum = sum + n;
//	}
//	float med= sum/i;
//	cout << "Average= " << med << endl << "Sum= " << sum << endl << "Minimum= " << min << endl << "Maximum=" << max;
//}

////2.9 c)
//int main(){
//	int i = 0;
//	float max, min, sum, n, med;
//	cout << "Sequence ";
//	cin >> n;
//	max = n;
//	min = n;
//	sum = 0;
//	while(!cin.eof()){
//		if(n<min){
//			min = n;
//		}
//		if(n>max){
//			max = n;
//		}
//		sum = sum + n;
//		i++;
//		cin >> n;
//	}
//	med = sum/i;
//	cout << "Average= " << med << endl << "Sum= " << sum << endl << "Minimum= " << min << endl << "Maximum=" << max;
//}

//2.10 a)
//int main(){
//	int n;
//	cout << "Number:";
//	cin >> n;
//	int d1 = n%10;
//	int d3 = n/100;
//	if(d1 == d3){
//		cout << "Capicua!";
//	}
//	else{
//		cout << "Not capicua!";
//	}
//}

//2.10 b)
//int main(){
//	int n;
//	bool capicua = true;
//	cout << "Number: ";
//	cin >> n;
//	int n2 = n;
//	int length=0;
//	while(n2 != 0){
//		length++;
//		n2 = n2/10;
//	}
//	int d1= 10;
//	int d2= pow(10,(length-1));
//	while(n>10){
//		if(n%d1 != n/d2){
//			capicua = false;
//			break;
//		}
//		n= (n%d2)/d1;
//		d2 = d2/100;
//	}
//	if(capicua){
//		cout << "Capicua";
//	}
//	else{
//		cout << "Not capicua";
//	}
//}

////2.11 a)
//int main(){
//	float d;
//	float sum = 0;
//	float numerador = 4;
//	float denominador = 1;
//	int n;
//	cout << "Série que dá o valor de pi." << endl << "Soma dos n primeiros termos." << endl << "n?";
//	cin >> n;
//	for (int t=0; t<n; t++){
//		d = numerador/denominador;
//		sum = sum + d;
//		numerador = numerador*(-1);
//		denominador = denominador + 2;
//	}
//	cout << "Soma=" << sum;
//}

//2.11 b)
//int main(){
//	float sum=1;
//	float denominador=1;
//	int n;
//	cout << "Série que dá o valor de e" << endl << "Soma dos n primeiros termos" << endl << "n?";
//	cin >> n;
//	for(int i=1; i<n; i++){
//		denominador = denominador*i;
//		sum = sum + 1/denominador;
//	}
//	cout << "Soma= " << sum;
//}

//2.11 c)
//int main(){
//	cout << "Série que dá o valor de e^-x" << endl << "Introduzir valor de x:";
//	int x;
//	cin >> x;
//	cout << "Soma dos n primeiros termos" << endl << "n?";
//	int n;
//	cin >> n;
//	float precisao;
//	cout << "Introduzir precisão:";
//	cin >> precisao;
//	float sum=1;
//	float numerador= 1;
//	float denominador = 1;
//	for(int t=2; t<=n; t++){
//		numerador = numerador*(-x);
//		denominador = denominador*(t-1);
//		float termo = numerador/denominador;
//		if(abs(termo) > precisao){
//			sum += termo;
//		}
//		else break;
//	}
//	cout << "Soma=" << sum;
//}

//2.13

//bool is_prime(int i){
//	bool prime=true;
//	for(int t=2; t<=sqrt(i); t++){
//		if(i%t == 0){
//			prime=false;
//			break;
//		}
//	}
//	return prime;
//}
//
//int main(){
//	int n;
//	cout << "Introduzir numero:";
//	cin >> n;
//	cout << n << "=";
//	while(n!=1){
//		for(int i=2; i<=n; i++){
//			if(is_prime(i) && (n%i == 0)){
//				cout << i << "x";
//				n=n/i;
//				break;
//			}
//		}
//	}
//	cout << "1";
//}

//2.14 a)
//int main(){
//	float n;
//	cout << "Introduzir valor de n: ";
//	cin >> n;
//	float delta, nMaxInter;
//	cout << "delta?";
//	cin >> delta;
//	cout << "nMaxInter";
//	cin >> nMaxInter;
//	float rq =1;
//	cout << "rq     " << "rqn     " << "rqn^2   " << "dif=n-rqn^2" << endl;
//	for(int i=1; i<=nMaxInter; i++){
//		float rqn = (rq + n / rq) / 2;
//		float dif = n - pow(rqn,2);
//		if(abs(dif)<delta) {
//			cout << rq << "    "<< rqn << "    "<< pow(rqn,2) << "    "<< dif << endl;
//			break;
//		}
//		else {
//			cout << rq << "    "<< rqn << "    "<< pow(rqn,2) << "    "<< dif << endl;
//			rq= rqn;
//		}
//	}
//}

//2.14 b)
int decimal_places(float n){
	int i=0;
	n= abs(n);
	while(n != floor(n)){
		n= n*10;
		cout << n << "   " << trunc(n) << endl;
		i++;
	}
	return i;
}


int main(){
	float n;
	cout << "Introduzir valor de n: ";
	cin >> n;
	float delta, nMaxInter;
	cout << "delta?";
	cin >> delta;
	cout << "nMaxInter";
	cin >> nMaxInter;
	float rq =1;
	cout << decimal_places(delta);
	cout << "rq     " << "rqn     " << "rqn^2   " << "dif=n-rqn^2" << endl;
	for(int i=1; i<=nMaxInter; i++){
		float rqn = (rq + n / rq) / 2;
		float dif = n - pow(rqn,2);
		if(abs(dif)<delta) {
			cout <<fixed << setprecision(decimal_places (delta)) << rq << "    "<< rqn << "    "<< pow(rqn,2) << "    "<< dif << endl;
			break;
		}
		else {
			cout <<fixed << setprecision(decimal_places (delta)) << rq << "    "<< rqn << "    "<< pow(rqn,2) << "    "<< dif << endl;
			rq= rqn;
		}
	}
}



