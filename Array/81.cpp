/*

Leaders in an array

Given an array arr[] of size n, the task is to find all the Leaders in the array. An element is a Leader if it is greater than or equal to all the elements to its right side.

Note: The rightmost element is always a leader.


Examples:

Input: arr[] = [16, 17, 4, 3, 5, 2]
Output: [17 5 2]

Explanation: 17 is greater than all the elements to its right i.e., [4, 3, 5, 2], therefore 17 is a leader. 5 is greater than all the elements to its right i.e., [2], therefore 5 is a leader. 2 has no element to its right, therefore 2 is a leader.
Input: arr[] = [1, 2, 3, 4, 5, 2]
Output: [5 2]
Explanation: 5 is greater than all the elements to its right i.e., [2], therefore 5 is a leader. 2 has no element to its right, therefore 2 is a leader.
*/

/*

//TC: O(n)
int main ()
{
    int a []= {4,7,5,3,2};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<a[n-1];
    
    int mx = a[n-1];
    for(int i=n-2; i>=0; i--)
    {
        if(a[i] >= mx)
        {
            cout<<a[i];           
            mx = a[i];
        }
    }
}
*/


/*
//TC: O(n^2)

int main()
{
    int a[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n; i++)
    {
        int leader = 1;
        
        for(int j=i+1; j<n; j++)
        {
            if(a[j] > a[i])
            {
               leader = 0;
               break;
            }
        }
        
        if(leader == 1)
        {
            cout << a[i] << " ";
        }
    }
}
*/