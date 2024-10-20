#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue <int> Q;
    vector <int> Descartadas;
    int x;

    while(true)
    {   
        cin >> x; 

        if(x == 0)
            break;

        for(int i = 1; i <= x; i++)
        {
            Q.push(i);
        }

        while(Q.size() >= 2)
        {
            Descartadas.push_back(Q.front());
            Q.pop();
            Q.push(Q.front());
            Q.pop();
        }

        cout << "Discarded cards:";
        for(int i = 0; i < Descartadas.size(); i++)
        {   
            if((i + 1) != Descartadas.size())
                cout << " " << Descartadas[i] << ",";
            else
                cout << " " << Descartadas[i] << endl;
        }

        cout << "Remaining card: " << Q.front() << endl;

        Descartadas.clear();
        Q.pop();
    }

    return 0;
}