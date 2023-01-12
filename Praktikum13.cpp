#include<iostream>
#include<string>

class MyString{
	char* str;
	public:
		MyString(char* mystr) : str(mystr){	}
		
		friend std::string& operator <<(std::string& s, const MyString& obj){
			s = obj.str;	
		}
};

class MyInt{
	int i;
	public:
		MyInt(int j):i(j){	}
		
		operator bool(){
				return 1;
		}
		
		operator std::string(){
			return "Der interne Wert ist "+ std::to_string(i);
		}
		
		int operator() (int num){
			return num;
		}
		
		
		
};
int main(){
/*
	MyString a("hallo");
	std::string b = "he";
	b << a;
	std::cout << b;
*/

MyInt mi = 4;
bool b = (bool)mi;
std::cout << b << std::endl;
std::string s = (std::string)mi;
std::cout << s << std::endl;
float f = 2.4;
std:: cout << mi(f);
	
	
	return 0;
}
