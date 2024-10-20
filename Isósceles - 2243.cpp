#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, x, maior;
    vector <int> V;
	
    cin >> N;
	V.push_back(0);

	for(int i = 1; i <= N + 1; i++)
	{
        if(i == N + 1)
        {
            V.push_back(0);
            break;
        }

        cin >> x;
        V.push_back(x);

		if(V[i] > V[i-1])
		{
			V[i] = V[i-1] + 1;
		}
	}

	for(int i = N; i >= 1; i--)
	{
		if (V[i] > V[i+1])
		{
			V[i] = V[i+1] + 1;
		}
	}

	maior = *max_element(V.begin(), V.end());

	cout << maior << endl;

	return 0;
}