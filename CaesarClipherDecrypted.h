#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
void decrypted_message(){
	ifstream input_file;
	input_file.open("CaesarClipherEncrypted.txt");
	
	ofstream output_file;
	output_file.open("CaesarClipherDecrypted.txt");
	
	string message;
	char ch;
	int i, key;

	input_file>>message;
	cout<<"Message in Encrypted : "<<message<<endl<<endl;
	cout << "Enter key : ";
	cin >> key;
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch > 'a'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	cout<<endl;
	cout << "\t\tDecrypted message : " <<message;
	output_file<<message;
	

	
}
