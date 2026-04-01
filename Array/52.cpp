#include <iostream>
using namespace std;

// given an unsorted array arr[] of size n, containing elements from the range 1 to n , it is know that one number in this range is missing and another number occurs twice in the array , find both duplicate number and missing number
// input :arr[] =

int main()
{
    // imp  read question

    int arr[] = {1, 4, 2, 5, 2, 6, 3, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int flag = 0;
    int givenSum = 0;
    int duplicate;

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                // cout << "twice"<< arr[i]<<endl;
                duplicate = arr[i];
                flag = 1;
            }
            if (flag == 1)
            {
                break;
            }
        }

        givenSum += arr[i];
    }

    int num = (n * (n + 1) / 2) - givenSum + duplicate;
    cout << "Missing: " << num << "\nDuplicate: " << duplicate;

    return 0;
}

//Tc o(n^2)
