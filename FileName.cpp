#include <iostream>
using namespace std;
int main()
{
	int v, m, n;
	cin >> v >> m >> n;
	if ((((v > 0 && m > 0) && n >= 0) && m > n))
	{
		cout << v / (m - n )-1;
	}
	else
	{
		cout << "Valid";
	}
}