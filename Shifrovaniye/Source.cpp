#include<iostream>
#include<string>
#include "DEcrypt.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string decryptedMessage, cryptedMessage;
	bool cryptOrDecrypt;
	cout << "���� ��������� ����: \n";
	getline(cin, cryptedMessage);
	decryptedMessage = cryptedMessage;
	cout << "������������ ��������� ��� �����������? (1 ��� 0) - ";
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
