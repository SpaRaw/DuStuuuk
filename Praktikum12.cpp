#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

class myInt{
	public:
		static int i;
		myInt(int i){
			this -> i = i;
		}
		
		friend myInt operator + (myInt &c, myInt &b){
			myInt i( c.i + b.i);
			return i;
		}
		
		friend myInt operator - (myInt &c, myInt &b){
			myInt i(c.i - b.i);
			return i;
		}
		
		friend myInt operator * (myInt &c, myInt &b){
			myInt i(c.i * b.i);
			return i;
		}
		
		friend myInt operator / (myInt &c, myInt &b){
			if(b.i != 0){
				myInt i(c.i / b.i);
			}else{
				myInt i(c.i / 1);
			}
			return i;	
		}
		
		friend bool operator < (myInt &c, myInt &b){
			if(c.i < b.i){
				return true;
			}else{
				return false;
			}
		}
		
		friend myInt operator ++(myInt a){
			myInt i(a.i +1);
			return i;
		}
		
		friend myInt operator ++(myInt a, int){
			myInt c(a.i + 1);
			return c;
		}
		
		friend myInt operator --(myInt a){
			myInt i(a.i - 1);
			return i;
		}
		
		friend myInt operator --(myInt a, int){
			myInt i(a.i - 1);
			return i;
		}
};

class myDouble{
	
	public:
		double d;
		myDouble(double d){
			this -> d = d;
		}
		
		friend myDouble operator + (myDouble &b, myDouble &c){
			myDouble i( c.d + b.d);
			return i;
		}
		
		friend myDouble operator - (myDouble &b, myDouble &c){
			myDouble i(c.d - b.d);
			return i;
		}
		
		friend myDouble operator * (myDouble &b, myDouble &c){
			myDouble i(c.d * b.d);
			return i;
		}
		
		friend myDouble operator / (myDouble &b, myDouble &c){
			myDouble i(0);
			if(b.d != 0){
				i.d=c.d / b.d;
			}else{
				i.d=c.d / 1;
			}
			return i;	
		}
		
		friend bool operator < (myDouble &b, myDouble &c){
			if(c.d < b.d){
				return true;
			}else{
				return false;
			}
		}
		
		friend myDouble operator ++(myDouble a){
			myDouble d(a.d +1);
			return d;
		}
		
		friend myDouble operator ++(myDouble a, int){
			myDouble d(a.d + 1);
			return d;
		}
		
		friend myDouble operator --(myDouble a){
			myDouble d(a.d - 1);
			return d;
		}
		
		friend myDouble operator --(myDouble a, int){
			myDouble d(a.d +1);
			return d;
		}
};

int main(){
	myInt a(5), b(4);
	
	return 0;
}


