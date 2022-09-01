#include<iostream>
#include<string>
#include "DEcrypt.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string decryptedMessage, cryptedMessage;
	bool cryptOrDecrypt;
	cout << "Ваше сообщение ниже: \n";
	getline(cin, cryptedMessage);
	decryptedMessage = cryptedMessage;
	cout << "Расшифровать сообщение или зашифровать? (1 или 0) - ";
	cin >> cryptOrDecrypt;
	DEcrypt message(cryptedMessage, decryptedMessage);
	if (cryptOrDecrypt)
	{
		decryptedMessage = message.decryptProcces();
		cout << decryptedMessage;
	}
	else if (!cryptOrDecrypt) 
	{
		cryptedMessage = message.cryptProcces();
		cout << cryptedMessage;
	}
}
