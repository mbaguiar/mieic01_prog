//============================================================================
// Name        : exercicios4.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Exercícios 4
//============================================================================

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <array>
using namespace std;

//4.1
bool isHydroxide(char compound[]){
	int len = strlen(compound);
	if(compound[len - 2] == 'O' && compound[len - 1] == 'H'){
		return true;
	}else return false;
}

bool isHydroxide(string compound){
	int len = compound.length();
	if(compound.at(len-2) == 'O' && compound.at(len-1) == 'H'){
		return true;
	}else return false;
}

//int main(){
//	bool finished= false;
//	char comp[7];
//	string compd;
//	int type=0;
//	cout << "Choose string type: 1 for C-string, 2 for stl string" << endl;
//	cin >> type;
//	if(type == 1){
//		while(!finished){
//			cout << "Insert compound name:";
//			cin >> comp;
//			if(strcmp(comp, "0") == 0){
//				finished = true;
//				cout << "Finished!";
//				break;
//			}
//			if(isHydroxide(comp))
//				cout << "Hydroxide"<< endl;
//			else cout << "Not hydroxide"<< endl;
//		}
//	}
//	else{
//		while(!finished){
//			cout << "Insert compound name:";
//			cin >> compd;
//			if(compd == "0"){
//				finished = true;
//				cout << "Finished!";
//				break;
//			}
//			if(isHydroxide(compd))
//				cout << "Hydroxide" << endl;
//			else cout << "Not hydroxide" << endl;
//		}
//	}
//}

//4.2

bool sequenceSearch(string s, int nc, char c){
	int n=0;
	bool result=false;
	for(int i=0; i<s.size(); i++){
		if(s.at(i) == c){
			n++;
		}else n=0;
		if(n == nc){
			result = true;
			break;
		}
	}
	return result;
}

//int main(){
//	string s;
//	char c;
//	int nc;
//	cout << "Insert string to search, the character and the number of characters: " << endl;
//	cin >> s >> c >> nc;
//	if(sequenceSearch(s, nc, c))
//		cout << "Found!";
//	else cout << "Not found!";
//}

//4.3
void decompose(string compound){
	int i=0;
	while(i<compound.size()){
		cout << compound.at(i);
		if(i+1 >= compound.size()){
			break;
		}
		if(compound.at(i+1)>='0' && compound.at(i+1)<='9'){
			cout << endl;
			i+=2;
		}else if((compound.at(i+1)>='a') && (compound.at(i+1)<='z')){
			cout<< compound.at(i+1) << endl;
			i+=2;
		}else{
			cout << endl;
			i+=1;
		}
	}
}

//int main(){
//	string compound="MgOH";
//	decompose(compound);
//	return 0;
//}

//4.4
string normalizeName(string name){
	string remove[6] = { " DE ", " DO ", " DA ", " DAS ", " DOS " , " E "};

	name = name.substr(name.find_first_not_of(' '));
	name = name.substr(0, name.find_last_not_of(' ')+1);

	for(int i=0; i<name.size(); i++){
		name.at(i) = toupper(name.at(i));
	}

	for(int i=0; i<6; i++){
		string part = remove[i];
		while(name.find(part) != -1){
			name.erase(name.find(part),part.size()-1);
		}
	}

	int n = name.size() -1;
	int i=0;
	while(i<n){
		if(name.at(i) == ' ' && name.at(i + 1) == ' '){
			int nSpaces = name.substr(i).find_last_of(' ');
			name = name.substr(0, i+1) + name.substr(i+nSpaces);
			n = name.size() -1;
		}
		i++;
	}
	return name;
}

//int main(){
//	string name;
//	cout << "Insert name to normalize" << endl;
//	getline(cin,name);
//	cout << normalizeName(name);
//	return 0;
//}

//4.5
struct Fraction {
	int numerator;
	int denominator;
};

Fraction readFracc(){
	Fraction f;
	cout << "Numerator?";
	cin >> f.numerator;
	cout << "Denominator?";
	cin >> f.denominator;
	return f;
}

void writeFracc(Fraction f){
	cout << f.numerator << "/" << f.denominator;
}

int euclid(int n, int d){
	n = abs(n);
	d = abs(d);
	int gdc=0;
	for(int i=1; i<=n && i<=d; i++){
		if(n%i == 0 && d%i == 0){
			gdc = i;
		}
	}
	return gdc;
}

Fraction reduceFracc(Fraction f){
	int gdc= euclid(f.numerator, f.denominator);
	f.numerator= f.numerator/gdc;
	f.denominator = f.denominator/gdc;
	return f;
}

//int main(){
//	writeFracc(reduceFracc(readFracc()));
//	return 0;
//}

//4.6
void readIntArray(int a[], int nElem){
	int i=0;
	int t=0;
	while(i<nElem){
		cout << "Index=" << i <<endl << "Enter value:";
		cin >> t;
		a[i]=t;
		i+=1;
	}
}

int searchValueInIntArray(const int a[], int nElem, int value){
	int result= -1;
	for(int i=0; i<nElem; i++){
		if(a[i] == value){
			result=i;
			break;
		}
	}
	return result;
}

int searchMulValueInIntArray(const int a[], int nElem, int value, int index[]){
	int result=0;
	int t=0;
	for(int i=0; i<nElem; i++){
		if(a[i] == value){
			result+=1;
			index[t]=i;
			t+=1;
		}
	}
	return result;
}

//int main(){
//	int e=0;
//	cout << "Enter number of elements:";
//	cin >> e;
//	int a[e];
//	readIntArray(a,e);
//	int v=0;
//	cout << "Insert value:";
//	cin >> v;
//	int index[e];
//	cout << searchMulValueInIntArray(a, e, v, index);
//}

//4.7

void readIntVector(vector<int> &v, int nElem){
	int elem;
	for(int i=0; i<nElem; i++){
		cout << "Enter element of index " << i << endl;
		cin >> elem;
		v.push_back(elem);
	}
}

void readIntVector(vector<int> &v){
	int next;
	cout << "Index 0" << endl;
	while(true){
		cin >> next;
		if(cin.eof()){
			cin.clear();
			break;
		}
		else{
			v.push_back(next);
			cout << "Index " << v.size() << endl;
		}
	}
}

int searchValueInVector(const vector<int> &v, int value){
	int result = -1;
	for(int i=0; i<v.size(); i++){
		if(v.at(i) == value){
			result = i;
			break;
		}
	}
	return result;
}

vector<int> searchMultValuesInIntVector(const vector<int> &v, int value){
	vector<int> index;
	for(int i=0; i<v.size(); i++){
		if(v.at(i) == value){
			index.push_back(i);
		}
	}
	return index;
}

//int main(){
//	vector<int> v;
//	int val;
//	readIntVector(v,4);
//
//	cout << "Insert value to search:"<< endl;
//	cin >> val;
//	cout << searchValueInVector(v,val);
//}

//4.8
void bubblesort(vector<string> &v){
	int length = v.size();
	while(length > 1){
		length--;
		for(int i=0; i<length; i++){
			if(v.at(i).compare(v.at(i+1)) > 0){
				string temp;
				temp = v.at(i);
				v.at(i) = v.at(i+1);
				v.at(i+1) = temp;
			}
		}
	}
}

//int main(){
//	vector<string> names;
//	for(int i = 0; i<4; i++){
//		string name;
//		cout << "Insert name" << endl;
//		cin >> name;
//		names.push_back(name);
//	}
//	bubblesort(names);
//	for(int i=0; i<names.size(); i++){
//		cout << names.at(i);
//	}
//}

//4.9
int binarySearch(const vector<string> &v, string value){
	int bottom = 0;
	int top = v.size() -1;
	int middle;
	int result = -1;
	bool found = false;
	while(bottom <= top && !found){
		middle = (bottom + top)/2;
		if(v.at(middle) == value){
			found = true;
			result = middle;
		}
		else if(v.at(middle) < value){
			bottom = top + 1;
		}
		else top = middle -1;
	}
	return result;
}

//int main(){
//	vector<string> names;
//	for(int i = 0; i<4; i++){
//		string name;
//		cout << "Insert name" << endl;
//		cin >> name;
//		names.push_back(name);
//	}
//	bubblesort(names);
//	cout << "Enter name to search"<< endl;
//	string value;
//	cin >> value;
//	cout << binarySearch(names, value);
//	}

//4.10
void removeDuplicates(vector<int> &v){
	int n=0;
	int len= v.size();
	for(; n<len; n++){
		for(int i=n+1; i<len; i++){
			if(v.at(n) == v.at(i)){
				for(int t= i; t< len-1; t++){
					v.at(t)= v.at(t+1);
				}
				len--;
				v.resize(len);
			}
		}
	}
}

//int main(){
//	vector<int> vec;
//	for(int t=0; t<7; t++){
//		int tem;
//		cin >> tem;
//		vec.push_back(tem);
//	}
//	removeDuplicates(vec);
//	for(int i=0; i<vec.size(); i++){
//		cout << vec.at(i) << endl;
//	}
//}

//4.11

void bubblesortInt(vector<int> &v){
	int length = v.size();
	while(length > 1){
		length--;
		for(int i=0; i<length; i++){
			if(v.at(i) > v.at(i+1)){
				int temp;
				temp = v.at(i);
				v.at(i) = v.at(i+1);
				v.at(i+1) = temp;
			}
		}
	}
}

int binarySearchInt(const vector<int> &v, int value){
	int bottom = 0;
	int top = v.size() -1;
	int middle;
	int result = -1;
	bool found = false;
	while(bottom <= top && !found){
		middle = (bottom + top)/2;
		if(v.at(middle) == value){
			found = true;
			result = middle;
		}
		else if(v.at(middle) < value){
			bottom = top + 1;
		}
		else top = middle -1;
	}
	return result;
}

vector<int> reunion(const vector<int> &v1, const vector<int> &v2){
	vector<int> result = v1;
	for(int i=0; i<v2.size(); i++){
		result.push_back(v2.at(i));
	}
	bubblesort(result);
	removeDuplicates(result);
	return result;
}

vector<int> intersection(const vector<int> &v1, const vector<int> &v2){
	vector<int> result= v1;
	for(int i=0; i<v2.size(); i++){
		if(binarySearchInt(result, v2.at(i)) == -1){
			result.push_back(v2.at(i));
		}
	}
	return result;
}

int main(){
	cout << "helooo";
}

//4.13
//int main(){
//	ifstream in_file;
//	ofstream out_file;
//	vector<string> vnames;
//	string next;
//	string path;
//	string newpath;
//
//	cout << "Insert file's name:";
//	cin >> path;
//
//	newpath = path.substr(0, path.find_first_of('.'));
//	newpath.append("_sorted.txt");
//
//	in_file.open(path);
//	if( in_file.fail()){
//		cerr << "Input file opening failed.\n";
//		exit(1) ;
//	}
//	while(in_file >> next){
//		vnames.push_back(next);
//	}
//	in_file.close();
//	sort(vnames.begin(), vnames.end());
//	out_file.open(newpath);
//	if( out_file.fail()){
//		cerr << "Input file opening failed.\n";
//		exit(1) ;
//	}
//	for(int i=0; i<vnames.size(); i++){
//		out_file << vnames.at(i) << endl;
//	}
//}
