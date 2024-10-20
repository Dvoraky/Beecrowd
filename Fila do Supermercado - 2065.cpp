#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, M, x, y = 0, j = 0, aux;
	
	cin >> N >> M;
	vector <int> Func;
	vector <int> Cliente;
    int *v = NULL;
    v = (int*) malloc(N * sizeof(int));

	for(int i = 0; i < N; i++)
    {
        cin >> x;
        Func.push_back(x);
    }
		
	for(int i = 0; i < M; i++)
    {
        cin >> x;
        Cliente.push_back(x);
    }
		
	while(y < M) 
	{
		if(y < N)
		{
			v[y] = Cliente[y] * Func[y];
			y++;
		}
        
		else
		{
			aux = v[0];
			for(int i = 0; i < N; i++)
            {
                if(aux > v[i])
				{
					aux = v[i];
					j = i;
				}
            }
				
			v[j] += Cliente[y] * Func[j];
		
			j = 0;
			y++;
		}
	}

	aux = v[0];

	for(int i = 0; i < N; i++)
    {
        if(aux < v[i])
        {
            aux = v[i];
        }
    }
		
	cout << aux << endl;

    return 0;
}