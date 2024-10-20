#include <bits/stdc++.h>

using namespace std;

int cont = 0;
int V[100002];

void merge(int Vm[], int left, int right, int middle)
{
    int i, j, k = 0, WAH[right-left];
    i = left;
    j = middle;
    
    while(i < middle && j < right)
    {
        if(Vm[i] <= Vm[j])
        {
            WAH[k] = Vm[i];
            k++;
            i++;
        }

        else
        {
            WAH[k] = Vm[j];
            k++;
            j++;
            cont = cont + (middle - i);
        }
        
    }
    
    while(i < middle)
    {
        WAH[k] = Vm[i];
        k++;
        i++;
    }

    while(j < right)
    {
        WAH[k] = Vm[j];
        k++;
        j++;
    }
    
    for(i = left; i < right; i++)
    {
        Vm[i] = WAH[i-left];
    }

}
    
void mergeSort(int Vm[], int left, int right)
{
    int middle;
        
    if(left < right - 1)
    {
        middle = (left + right) / 2;
        mergeSort(Vm, left, middle);
        mergeSort(Vm, middle, right);
        merge(Vm, left, right, middle);
    }

}
 
int main()
{

    int N;
    
    while(true)
    {
        cont = 0;
        cin >> N;
        if(N == 0)
            break;

        for(int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
            
        mergeSort(V, 0, N);
        
        if(cont % 2 == 0)
        {
            cout << "Carlos" << endl;
        }
            
        else
        {
            cout << "Marcelo" << endl;
        }
            
    }

    return 0;
}