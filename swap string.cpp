#include <iostream>
using namespace std;
void displayrev(string str){
	for(int i = str.length() - 1; i>=0 ; i--){
		cout << str[i];
	}
}
int main(){
	string str = "Sumikumar";
	displayrev(str);
	
}
