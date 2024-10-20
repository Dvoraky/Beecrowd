#include <stdio.h>

int main() 
{
    int N, M, i, t, x;
    int r = 0;
    int m[105];

    scanf("%d", &N);
    scanf("%d", &M);

    for(i = 0; i <= N; i++)
    {
        m[i] = 0;
    }
    for(i = 0; i < M; i++)
    {
        scanf("%d", &x);
        if(m[x] == 0)
        {
            r++;
            m[x] = 1;
        }
    }

    t = N - r;
    printf("%d\n", t);

    return 0;
}