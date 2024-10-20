#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K, x, soma, aux, temp, maior;
    vector <int> V;
    vector <int> :: iterator it;

    while(cin >> N)
    {
        V.clear();
        soma = 0;
        aux = 0;
        temp = 0;
        maior = 0;

        cin >> K;

        for(int i = 0; i < N; i++)
        {
            cin >> x;
            V.push_back(x - K);
        }

        for(int i = 0; i < V.size(); i++)
        {   
            if(soma + V[i] > 0)
            {
                if(soma > maior)
                    maior = soma;
                if(soma + V[i] < soma)
                    temp = soma;
                soma += V[i];
                
            }

            else
            {
                if(aux < soma)
                    aux = soma;
                soma = 0;
            }
        }

        if(aux > soma && aux >= temp && aux >= maior) cout << aux << endl;
        else if(temp > soma && temp >= aux && temp >= maior) cout << temp << endl;
        else if(soma >= aux && soma >= temp && soma >= maior) cout << soma << endl;  
        else if(maior > aux && maior > temp && maior > soma) cout << maior << endl;
            
    }
       

    return 0;
}