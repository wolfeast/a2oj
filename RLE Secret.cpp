#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t; cin >> t;
	string str;
	while (t--)
	{
		int c = 1;
		int A[26] = { 0 };
		cin >> str;
		bool cr = false;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == str[i + 1])
			{
				c++;
				cr = true;
				continue;
			}
			else if (str[i] != str[i + 1] && cr)
			{
				cout << str[i] << c;
				c = 1;
			}
			else cout << str[i] << "1";
		}
		cout << endl;
	}
	return 0;
}