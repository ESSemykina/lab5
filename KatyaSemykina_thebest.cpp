5.1(4)
#include <iostream>
#include <string>


using namespace std;
int main()
{

	int a, b;
	cin >> a;
	char s[100];
	for (int i = 0; i < a; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < a; i++)
	{
		if ((s[i] == 'e') || (s[i] == 'y') || (s[i] == 'u') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'a') || (s[i] == 'E') || (s[i] == 'Y') || (s[i] == 'U') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'A'))
		{ }
		else
		{
			cout << s[i];
		}
	}
	
}
