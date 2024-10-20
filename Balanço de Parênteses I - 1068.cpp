#include <bits/stdc++.h>

using namespace std;

int main()
{
    string V;
    while(cin >> V)
    {
        int a = 0, f = 0, verificador = 0;
        int N = V.size();

        for(int i = 0; i <= N; i++)
        {
            if(V[i] == '(')
            {
                a++;
                verificador = 1;
            }

            if(V[i] == ')')
            {
                f++;
                if(verificador == 0 || f > a)
                {
                    verificador = 2;
                    printf("incorrect\n");
                    break;
                }
            }
        }

        if(verificador != 2)
        {
            if(a != f)
                printf("incorrect\n");
            else
                printf("correct\n");
        }
    }

    return 0;
}