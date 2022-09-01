#include<string>
#pragma once

using namespace std;
class DEcrypt
{
private:
	string cryptedMessage, decryptedMessage;
public:
	DEcrypt(string cryptedMessage, string decryptedMessage)
	{
		this->cryptedMessage = cryptedMessage;
		this->decryptedMessage = decryptedMessage;
	}
	string decryptProcces() 
	{
		for (int i = 0; i < cryptedMessage.size(); i++)
		{
			if (cryptedMessage[i] == 'l')
			{
				cryptedMessage[i] = 'a';
			}
			else if (cryptedMessage[i] == 'k')
			{
				cryptedMessage[i] = 'b';
			}
			else if (cryptedMessage[i] == 'c')
			{
				cryptedMessage[i] = 'c';
			}
			else if (cryptedMessage[i] == 'o')
			{
				cryptedMessage[i] = 'd';
			}
			else if (cryptedMessage[i] == 'd')
			{
				cryptedMessage[i] = 'e';
			}
			else if (cryptedMessage[i] == 'n')
			{
				cryptedMessage[i] = 'f';
			}
			else if (cryptedMessage[i] == 'f')
			{
				cryptedMessage[i] = 'g';
			}
			else if (cryptedMessage[i] == 'i')
			{
				cryptedMessage[i] = 'h';
			}
			else if (cryptedMessage[i] == 'u')
			{
				cryptedMessage[i] = 'i';
			}
			else if (cryptedMessage[i] == 'a')
			{
				cryptedMessage[i] = 'j';
			}
			else if (cryptedMessage[i] == 'v')
			{
				cryptedMessage[i] = 'k';
			}
			else if (cryptedMessage[i] == 'p')
			{
				cryptedMessage[i] = 'l';
			}
			else if (cryptedMessage[i] == 'e')
			{
				cryptedMessage[i] = 'm';
			}
			else if (cryptedMessage[i] == 'r')
			{
				cryptedMessage[i] = 'n';
			}
			else if (cryptedMessage[i] == 's')
			{
				cryptedMessage[i] = 'o';
			}
			else if (cryptedMessage[i] == 't')
			{
				cryptedMessage[i] = 'p';
			}
			else if (cryptedMessage[i] == 'w')
			{
				cryptedMessage[i] = 'q';
			}
			else if (cryptedMessage[i] == 'm')
			{
				cryptedMessage[i] = 'r';
			}
			else if (cryptedMessage[i] == 'b')
			{
				cryptedMessage[i] = 's';
			}
			else if (cryptedMessage[i] == 'h')
			{
				cryptedMessage[i] = 't';
			}
			else if (cryptedMessage[i] == 'z')
			{
				cryptedMessage[i] = 'u';
			}
			else if (cryptedMessage[i] == 'y')
			{
				cryptedMessage[i] = 'v';
			}
			else if (cryptedMessage[i] == 'j')
			{
				cryptedMessage[i] = 'w';
			}
			else if (cryptedMessage[i] == 'q')
			{
				cryptedMessage[i] = 'x';
			}
			else if (cryptedMessage[i] == 'x')
			{
				cryptedMessage[i] = 'y';
			}
			else if (cryptedMessage[i] == 'g')
			{
				cryptedMessage[i] = 'z';
			}
		}
		decryptedMessage = cryptedMessage;
		return decryptedMessage;
	}
	string cryptProcces()
	{
		for (int i = 0; i < decryptedMessage.size(); i++)
		{
			if (cryptedMessage[i] == 'a')
			{
				cryptedMessage[i] = 'l';
			}
			else if (cryptedMessage[i] == 'b')
			{
				cryptedMessage[i] = 'k';
			}
			else if (cryptedMessage[i] == 'c')
			{
				cryptedMessage[i] = 'c';
			}
			else if (cryptedMessage[i] == 'd')
			{
				cryptedMessage[i] = 'o';
			}
			else if (cryptedMessage[i] == 'e')
			{
				cryptedMessage[i] = 'd';
			}
			else if (cryptedMessage[i] == 'f')
			{
				cryptedMessage[i] = 'n';
			}
			else if (cryptedMessage[i] == 'g')
			{
				cryptedMessage[i] = 'f';
			}
			else if (cryptedMessage[i] == 'h')
			{
				cryptedMessage[i] = 'i';
			}
			else if (cryptedMessage[i] == 'i')
			{
				cryptedMessage[i] = 'u';
			}
			else if (cryptedMessage[i] == 'j')
			{
				cryptedMessage[i] = 'a';
			}
			else if (cryptedMessage[i] == 'k')
			{
				cryptedMessage[i] = 'v';
			}
			else if (cryptedMessage[i] == 'l')
			{
				cryptedMessage[i] = 'p';
			}
			else if (cryptedMessage[i] == 'm')
			{
				cryptedMessage[i] = 'e';
			}
			else if (cryptedMessage[i] == 'n')
			{
				cryptedMessage[i] = 'r';
			}
			else if (cryptedMessage[i] == 'o')
			{
				cryptedMessage[i] = 's';
			}
			else if (cryptedMessage[i] == 'p')
			{
				cryptedMessage[i] = 't';
			}
			else if (cryptedMessage[i] == 'q')
			{
				cryptedMessage[i] = 'w';
			}
			else if (cryptedMessage[i] == 'r')
			{
				cryptedMessage[i] = 'm';
			}
			else if (cryptedMessage[i] == 's')
			{
				cryptedMessage[i] = 'b';
			}
			else if (cryptedMessage[i] == 't')
			{
				cryptedMessage[i] = 'h';
			}
			else if (cryptedMessage[i] == 'u')
			{
				cryptedMessage[i] = 'z';
			}
			else if (cryptedMessage[i] == 'v')
			{
				cryptedMessage[i] = 'y';
			}
			else if (cryptedMessage[i] == 'w')
			{
				cryptedMessage[i] = 'j';
			}
			else if (cryptedMessage[i] == 'x')
			{
				cryptedMessage[i] = 'q';
			}
			else if (cryptedMessage[i] == 'y')
			{
				cryptedMessage[i] = 'x';
			}
			else if (cryptedMessage[i] == 'z')
			{
				cryptedMessage[i] = 'g';
			}
		}
		decryptedMessage = cryptedMessage;
		return cryptedMessage;
	}


};

