#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include "CaesarClipherEncrypted.h"
#include "CaesarClipherDecrypted.h"
using namespace std;
void initialize();
int main(){
	initialize();
	int number;
	cout<<"Enter a number : ";
	cin>>number;
	switch(number){
		case 1:
			cout<<endl<<endl;
			encrypted_message();
			exit(2);
			break;
		case 2:
			cout<<endl<<endl;
			decrypted_message();
			exit(2);
			break;
	}	
}
void initialize(){
	cout<<"-------------------------------------\n";
	cout<<"1:	Caesar Clipher Encrypted    |\n";
	cout<<"2:	Caesar Clipher Decrypted    |\n";
	cout<<"-------------------------------------";
	cout<<endl<<endl;
}
