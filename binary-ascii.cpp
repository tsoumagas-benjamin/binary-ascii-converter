#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void btoa(){
	string b;
	cout << "Enter a binary number to convert to ASCII:  ";
	cin >> b;
	int len  = b.length();	
	//gets the length of the input

	for (int i = 0; i<len; i++){
		if(b[i] == '0' || b[i] == '1'){}
		else
		{
			cout << "This is not a binary number!" << endl;
		}
	}
	//checks if the string is binary, exit program otherwise
	
	int power = len - 1;
	int sum = 0;
	int curr = 0;
	for (int i = 0; i<len; i++){
		if (b[i] == '1'){
			curr = pow(2,power);
			sum += curr;
		}
		power--;
	}
	cout << "Decimal: " << sum << "\t";
	//converts the binary number to decimal

	cout << "Character: " << char(sum) << endl;
	//outputs the character corresponding to the decimal value
}

void ctob(){
	char c;
	cout << "Enter a character: ";
	cin >> c;
	int dec  = int(c);
	string bin;
	cout << "Decimal: " << dec << "\t";
	for (int i=7;i>=0;i--){
		if(dec >= (pow(2,i))){
			dec -= (pow(2,i));
			bin += "1";
		}
		else{
			bin += "0";
		}
	}
	cout << "Binary: " << bin << endl;
}

int main(){
	int choice;
	while (choice != 0){
		cout << endl;
		cout << "Enter 1 to convert binary to character." << endl;
		cout << "Enter 2 to convert character to binary." << endl;
		cout << "Enter 0 at any time to quit." << endl;
		cin >> choice;
		cout << endl;
	
		if (choice == 1){
			btoa();
		}
		if (choice == 2){
			ctob();
		}
	}
	return 0;
}
