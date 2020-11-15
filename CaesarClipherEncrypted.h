#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
void encrypted_message(){
	ofstream output_file;
	output_file.open("CaesarClipherEncrypted.txt");
	
	string message;
	char ch;
	int i, key;
	
	cout << "Enter a Message to Encrypt (without spaceses) : ";
	cin>>message;
	cout << "\nEnter key : ";
	cin >> key;
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	cout<<endl<<endl;
	cout << "\t\tEncrypted message: " << message;
	output_file<<message;
}
