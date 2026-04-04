/*

Smallest Missing Positive Number:


Given an unsorted array arr[] with both positive and negative elements, find the smallest positive number missing from the array.

Examples:

Input: arr[] = [2, -3, 4, 1, 1, 7]
Output: 3
Explanation: 3 is the smallest positive number missing from the array.

Input: arr[] = [5, 3, 2, 5, 1]
Output: 4
Explanation: 4 is the smallest positive number missing from the array.

Input: arr[] = [-8, 0, -1, -4, -3]
Output: 1 
Explanation: 1 is the smallest positive number missing from the array.


1- Brute force: O(n^2), SC: O(1)
2- Sorting: O(nlogn), SC: O(1)
3- visited array: TC: O(n), SC: O(n)
4- Most optmised: TC: O(n), SC: O(1)


*/

/*
int main()
{
    

    bool visited[n] = {false};
    
     for (int i = 0; i < n; i++) {
         
          if (arr[i] >= 1 && arr[i] <= n)
                vis[arr[i] - 1] = true;
        }
    
     }
     
     for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                return i+1;
            }
        }
    
    return n+1;
}    
    
*/    
    

/*

int main()
{
    int a[] ={2,-3,4,1,1,7};
    int n= sizeof(a)/sizeof(a[0]);

    sort(a,a+n);

    int min = 1;   

    for(int i=0; i<n; i++)
    {
        if(a[i] == min)
        {
            min++;
        }
    }

    cout<<min;
}
*/

/*

int main() {
    int arr[] = {2,3, 4, -1, 1,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sm =1;

    for (int num =1; num <= n + 1; num++) {
        bool found = false;

        for (int i =0; i < n; i++) {
            if (arr[i]== num) {
                found =true;
                break;
            }
        }

        if (!found) {
            sm =num;
            break;
        }
    }

    cout << sm;

    return 0;
}

*/