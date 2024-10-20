#include <bits/stdc++.h>

using namespace std;

int main()
{
    list <char> C;
    list <char> :: iterator it;
    string frase;

    while(cin >> frase)
    {
        it = C.begin();

        for(int i = 0; i < frase.size(); i++)
        {
            if(frase[i] == '[')
            {
                it = C.begin();
            }
            else if(frase[i] == ']')
            {
                it = C.end();
            }
            else
            {
                C.insert(it, frase[i]);
            }
        }

        for(it = C.begin(); it != C.end(); it++)
        {
            cout << *it;
        }

        cout << endl;
        C.clear();
    }

    return 0;
}