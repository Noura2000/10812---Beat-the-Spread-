#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,d,a,b;
	cin >> n;
	while (n--)
	{
		cin >> s >> d;
		if (s < d )
			cout << "impossible" << endl;
		else
		{
			a = (s + d) / 2;
			b = a - d;
			if ((a + b) == s && abs(a - b) == d)
				cout << a << " " << b << endl;
			else
				cout << "impossible" << endl;
		}
	}
	return 0;
}
