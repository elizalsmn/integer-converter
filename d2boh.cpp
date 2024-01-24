// d2boh.cpp

#include <iostream>
#include "d2boh.h"
#include <cmath>
using namespace std;

int decimal_to_binary(int input, int output[12]) {
	int i=0,copy_input=input;
	while (copy_input>1){
		copy_input/=2;
		i++;
	} 
	for (int j=i; j>=0; j--){
		int bit= input/pow(2,j);
		output[i-j]=bit;
		input%=int(pow(2,j));	
	}
	for (int x=0; x<=i;x++){
		cout<<output[x];
	}
	cout << endl;
	return i+1;

}

int decimal_to_octal(int input, int output[12]) {
	int i=0,copy_input=input;
	while (copy_input>7){
		copy_input/=8;
		i++;
	} 
	for (int j=i; j>=0; j--){
		int bit= input/pow(8,j);
		output[i-j]=bit;
		input%=int(pow(8,j));	
	}
	for (int x=0; x<=i;x++){
		cout<<output[x];
	}
	cout << endl;

	return i+1;
}

int decimal_to_hexadecimal(int input, char output[12]) {
	int i=0,copy_input=input;
	while (copy_input>15){
		copy_input/=16;
		i++;
	} 
	for (int j=i; j>=0; j--){
		int bit= input/pow(16,j);
		if (bit>9){
			output[i-j]=char('A'+bit-10);
		}
		else{
			output[i-j]=char(48+bit);
		}
		input%=int(pow(16,j));	
	}
	for (int x=0; x<=i;x++){
		cout<<output[x];
	}
	cout << endl;
	return i+1;
}
