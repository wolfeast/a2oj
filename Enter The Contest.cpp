#include <iostream>
#include <string>

using namespace std;

int main()
{
	long t, sum = 0;
	int ctr = 1;
	string str;
	cin >> t;
	int a[6][5];
	int v = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a[i][j] = v++;
		}
	}
	while (t--)
	{
		cin >> str;
		sum = 0;
		for (int k = 0; k < str.length(); k++)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if ((str[k] - 'A') == a[i][j])
					{
						sum += (i + j + 2);

					}
				}
			}
		}
		cout << "Case " << ctr++ << ": " << sum << endl;
	}

	return 0;
}