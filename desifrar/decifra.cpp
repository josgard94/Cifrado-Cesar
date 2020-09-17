#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cctype>
#include<stdlib.h>
using namespace std;

int main()
{
	char cifrado[300];
	char message[300], alfabeto[27];
	int posiciones[300];
	
	int  i = 0, j, n;

	cout<<"Message cifrado: "<<endl;
	cin.get(message,300);
	cout<<"Numero de espacios: ";cin>>n;
	for(i = 0, j = 65; i  < 26; i++,j++)
	{
		alfabeto[i] = j;
	}
	int k;
	for(int j = 0; j < strlen(message); j++)
	{
		message[j] = toupper(message[j]);
		for (k = 0; k < 26; k++)
		{
			if(message[j] == alfabeto[k])
			{
				
				break;
			}
		}

		if(message[j]>=65 && message[j]<=90)
		{
			posiciones[j] = k;
		}
		else
		{
			posiciones[j] = message[j];
		}
	}

	for(int l=0; l < strlen(message);l++)
	{
		if(posiciones[l]>=27)
		{
			posiciones[l] = posiciones[l];
		}
		else
		{
			posiciones[l] = (posiciones[l] - n)%26;

			if(posiciones[l]<0)
			{
				posiciones[l] = posiciones[l]+26;
			}
		}
	}
	
	cout<<"menssage decifrado: "<<endl;
	int x;
	for(int l = 0;l < strlen(message);l++)
	{
		for(x = 0; x <= 26;x++)
		{
			if(posiciones[l] == x)
			{
				break;
			}
		
		}

		if(posiciones[l]>=0 && posiciones[l]<27)
		{
			cifrado[x] = alfabeto[x];
			cout<<cifrado[x];
		}
		else
		{
			cifrado[x]= posiciones[l];
			cout<<cifrado[x];
		}
		
	}
	
	cout<<endl;


	return 0;

}
