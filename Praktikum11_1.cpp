
#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

bool calcInt();
bool calcDouble();


int main(){
	cout << "Typ auswaehlen:" << endl;
	cout << "---------------" << endl;
	cout << "Int.........<1>" << endl;
	cout << "Double......<2>" << endl;
	cout << "---------------" << endl;
	cout << "Eingabe: ";
	char input;
	cin >> input;
	system("cls");
	switch(input){
		case '1':
			if(!calcInt()){
				cout << "Fehlerhafter Operator/ Double anstelle Int";
			};
			break;
		case '2':
			if(!calcDouble()){
				cout << "Fehlerhafter Operator/ , anstelle .";
			}
			break;
		default:
			cout << "Incorrect Input\nPress any key to close";
			getchar();
			
	}
	return 0;
}

bool calcInt(){
	int o1, o2;
	char a;
	while(true){
		cout << "Eingabe < int operant int> :  ";
		cin >> o1 >> a >> o2;
		if(a != '+' && a != '-' && a != '*' && a != '/'){
			return false;
		}
		int result;
		try{
			switch(a){
				case '+': result = (int)o1 + (int)o2 ;break;
				case '-': result = (int)o1 - (int)o2 ;break;
				case '*': result = (int)o1 * (int)o2 ;break;
				case '/': result = (int)o1 / (int)o2 ;break;
			}	
		}catch(int n){
			return false;
		}
		cout << "Ausgabe <"<<o1<<" "<<a<<" "<<o2<<">: " << result << endl;
	
	}
	return true;
}

bool calcDouble(){
	double o1, o2;
	char a;
	while(true){
		cout << "Eingabe < double operant double> :  ";
		cin >> o1;
		cin >> a;
		cin >> o2;
		if(a != '+' && a != '-' && a != '*' && a != '/'){
			return false;
		}
		double result;
		try{
			switch(a){
				case '+': result = (double)o1 + (double)o2 ;break;
				case '-': result = (double)o1 - (double)o2 ;break;
				case '*': result = (double)o1 * (double)o2 ;break;
				case '/': result = (double)o1 / (double)o2 ;break;
			}	
		}catch(int n){
			return false;
		}
		cout << "Ausgabe <"<<o1<<" "<<a<<" "<<o2<<">: " << result << endl;
	
	}
	return true;
	
}
