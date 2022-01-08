#include <iostream>

using namespace std;

int main()
{
	string hm;

	do {
		cout << "orospu çocuğu musun?: ";
		cin >> hm;
		if( hm != "evet" )
		{
			cout << "lütfen yalan söylemeyiniz.\n";
		}
	}while( hm != "evet" );

	cout << "tebrikler doğru cevabı verdiniz.\n";

	return -1;
}
