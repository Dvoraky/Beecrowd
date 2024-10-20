#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, P, x, aux, temp, lucro = 0;
	vector <int> V;

	cin >> N >> P;

	for(int i = 0; i < N; i++)
	{
		cin >> x;
		V.push_back(x);
	}
		
	aux = temp = V[0];

	for(int i = 1; i < N; i++)
	{
		if((aux > V[i] && (aux - V[i] >= P)) || V[i] < temp)
		{
			if(aux - temp - P > 0)
			{
				lucro += aux - temp - P;
			}
			
			aux = temp = V[i];
		}

		if(V[i] > aux)
		{
			aux = V[i];
		}
	}

	if(aux - temp - P > 0)
	{
		lucro += aux - temp - P;
	}
		
	cout << lucro << endl;

	return 0;
}