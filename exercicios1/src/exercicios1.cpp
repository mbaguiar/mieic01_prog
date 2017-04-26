
#include <iostream>
#include <cmath>
using namespace std;

/*
//1.1
int main() {
	char a;
	cout << "Introduzir letra:";
	cin >> a;
	cout << endl << "Código ASCII de " << a << " = " << (int)a;
	return 0;
}
*/

/*
// 1.2
int main()
 {
	int a, b, c;
	float media, amedia, bmedia, cmedia;
	cout << "A" << "?";
	cin >> a;
	cout << "B" << "?";
	cin >> b;
	cout << "C" << "?";
	cin >> c;
	media = (a + b + c) / 3.0;
	amedia = a - media;
	bmedia = b - media;
	cmedia = c - media;
	cout << "media =" << media << endl;
	cout << "A-media =" << amedia << endl;
	cout << "B-media =" << bmedia << endl;
	cout << "C-media =" << cmedia << endl;
	return 0;
 }
*/

/*
//1.3
int main(){
	float m, p, r;
	float pi = 3.14159265354;
	cout << "Massa específica do material em kg/m^3?";
	cin >> p;
	cout << "Raio da esfera em m?";
	cin >> r;
	m = (float) (4/3)*(p*pi*pow(r,3));
	cout << "Massa da esfera = " << m << " kg";
}
*/

/*
//1.4
int main() {
	float a, b, c, d, e, f;
	cout << "Calcular x e y" << endl << "ax + by = c" << endl << "dx + ey = f << endl";
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
	if ((a*e - b*d) == 0)
		cout << "Sistema impossível, divisão por zero";
	else{
		x = (float) (c*e - b*f) / (a*e - b*d);
		y = (float) (a*f - c*d) / (a*e - b*d);
		cout << "x=" << x << endl << "y=" << y;
	}
	return 0;
}
*/

/*
 // 1.5
int main(){
	int h1, h2, m1, m2, s1, s2;
	cout << "Tempo 1 (horas minutos segundos)?";
	cin >> h1 >> m1 >> s1;
	cout << "Tempo 2 (horas minutos segundos)?";
	cin >> h2 >> m2 >> s2;
	int tempo1 = s1 + m1*60 + h1*60*60;
	int tempo2 = s2 + m2*60 + h2*60*60;
	int sum = tempo1 + tempo2;
	cout << sum/(24*60*60) << " dia(s), " << (sum%(24*60*60))/(60*60) << " hora(s), " << ((sum%(24*60*60))%(60*60))/60 << " minuto(s) e " << ((sum%(24*60*60))%(60*60))%60 << " segundo(s)";
	return 0;
}
*/

//1.6
int main(){
	float x1, y1, x2, y2, x3, y3;
	cout << "Introduzir coordenadas ponto 1";
	cin >> x1 >> y1;
	cout << "Introduzir coordenadas ponto 2";
	cin >> x2 >> y2;
	cout << "Introduzir coordenadas ponto 3";
	cin >> x3 >> y3;
	float dista, distb, distc, s, area;
	dista = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	distb = sqrt(pow((x3-x2), 2) + pow((y3-y2), 2));
	distc = sqrt(pow((x1-x3), 2) + pow((y1-y3), 2));
	s = (dista + distb + distc)/2.0;
	area = sqrt(s*(s-dista)*(s-distb)*(s-distc));
	cout << "Área do triângulo=" << area;	return 0;
}

