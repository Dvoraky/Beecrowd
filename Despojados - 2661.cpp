#include <bits/stdc++.h>

using namespace std;

int main ()
{
	unsigned long long int N, cont = 0, limit = 2;

	cin >> N;

	while (pow(limit, 2) <= N)
	{
		if (N % limit == 0)
		{
			cont++;
			while (N % limit == 0)
			{
				N = N / limit;
			}
		}
		limit++;
	}

	if (N != 1)
	{
		cont++;
	}
	
	cout << (1ULL << cont) - cont - 1 << endl;

    return 0;
}