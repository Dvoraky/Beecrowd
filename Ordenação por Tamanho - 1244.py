N = int(input())
while N > 0:
    N = N - 1
    Frases = input().split()
    Frases.sort(reverse = True, key = len)

    for i in range(len(Frases)):
        print(Frases[i], end = '')
        if i != len(Frases) - 1:
            print(' ', end = '')

    print(end = '\n')