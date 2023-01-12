#include<iostream>

using namespace std;

class A{
	int* ap;
	
	public:
		A(){
			ap = new int[4];
			for(int i=0; i<4; i++){
				*(ap + i) = i;
			}
		}
		
		A(A &copyA){
			ap = new int[4];
			for(int i = 0; i< 4; i++){
				*(ap +i) = *(copyA.ap + i);
			}
		}
		
		~A(){
			delete[] ap;
		}
		
		void setAnfangsElement(int i){
			*ap = i;
		}
		
		void druckeArr(){
			for(int i = 0; i < 4; i++){
				cout << "ap["<<i<<"]="<<*(ap + i)<<endl;
			}
		}
};

int main(){
	A a;
	A al(a);
	cout<<"Orginal: "<<endl;
	a.druckeArr();
	cout<<"Kopie: "<<endl;
	al.druckeArr();
	
	a.setAnfangsElement(6);

	cout<<"Orginal: "<<endl;
	a.druckeArr();
	cout<<"Kopie: "<<endl;
	al.druckeArr();
	
	return 0;
}
