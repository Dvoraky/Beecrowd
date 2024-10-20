#include <bits/stdc++.h>

using namespace std;

void ehSubsequencia(string subsequencia , string Frase)
{
	int i, j;

	for (i = 0, j = 0; i < Frase.size() && j < subsequencia.size(); i++)
    {
		if (subsequencia[j] == Frase[i])
        {
			j++;
        }
    }

	if (j == subsequencia.size())
    {
		cout << "Yes" << endl;
    }
    
	else
    {
		cout << "No" << endl;
    }

}

int main()
{
   
	int N, Q;
	string Frase;
	string subsequencia;
	
	cin >> N;
	cin >> Frase;

	while(true)
	{
		cin >> Q;

		for (int j = 0; j < Q; j++)
		{
			cin >> subsequencia;
			ehSubsequencia(subsequencia, Frase);
		}

        N--;
        if(N == 0)
            break;

        cin >> Frase;
        
	}

    return 0;
}