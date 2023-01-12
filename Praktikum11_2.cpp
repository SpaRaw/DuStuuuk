#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

class myInt{
	public:
		int i;
		myInt(int i){
			this -> i = i;
		}
		
		myInt operator + (myInt &b){
			myInt i( this -> i + b.i);
			return i;
		}
		
		myInt operator - (myInt &b){
			myInt i(this -> i - b.i);
			return i;
		}
		
		myInt operator * (myInt &b){
			myInt i(this -> i * b.i);
			return i;
		}
		
		myInt operator / (myInt &b){
			if(b.i != 0){
				myInt i(this -> i / b.i);
			}else{
				myInt i(this -> i / 1);
			}
			return i;	
		}
		
		bool operator < (myInt &b){
			if(this -> i < b.i){
				return true;
			}else{
				return false;
			}
		}
};

class myDouble{
	double d;
	public:
		myDouble(double d){
			this -> d = d;
		}
		
		myDouble operator + (myDouble &b){
			myDouble i( this -> d + b.d);
			return i;
		}
		
		myDouble operator - (myDouble &b){
			myDouble i(this -> d - b.d);
			return i;
		}
		
		myDouble operator * (myDouble &b){
			myDouble i(this -> d * b.d);
			return i;
		}
		
		myDouble operator / (myDouble &b){
			myDouble i(0);
			if(b.d != 0){
				i.d=this -> d / b.d;
			}else{
				i.d=this -> d / 1;
			}
			return i;	
		}
		
		bool operator < (myDouble &b){
			if(this -> d < b.d){
				return true;
			}else{
				return false;
			}
		}
};

extern bool calcInt();
extern bool calcDouble();


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


