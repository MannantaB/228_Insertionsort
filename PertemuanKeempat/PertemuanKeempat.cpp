#include <iostream>
using namespace std;

void insertionsort() {
    int i, j, n, temp;
    int arr[20];
    
    for (i = 1; i <= n - 1; i++) { //step 1
        temp = arr[i]; //step 2

        j = i - 1; //step 3

        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j = j - 1; //step 4b
        }
        arr[j + 1] = temp; //step 5
    }
}
int main()
{
    
}


