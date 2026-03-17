

#include <iostream>
using namespace std;

int main()
{
    //given an integers,left rotate the array by 1 position
    // int arr[] = {12,32,443,4,34};
//   output: int arr[] = {32,443,4,34,12};


    int arr[] = {12,32,443,4,34};
    int n = sizeof(arr)/sizeof(arr[0]);

    int last = arr[0];

    for(int i=1;i<n;i++  ){
        arr[i-1]=arr[i];
    }
    
    arr[n-1]=last;

    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    

        //     int arr[] = {12,32,443,4,34};
    	// int n = sizeof(arr)/sizeof(arr[0]);
    	// int temp = arr[0];
    	
    	// for(int i=0;i<n;i++){
    	//     if(i==n-1){
    	//         arr[i]=temp;
    	//         break;
    	//     }
    	//     arr[i] = arr[i+1];
    	   
    	// }
    	
    	
    	// for(int i=0;i<n;i++){
    	//     cout<<arr[i] <<" ";
    	// }
    

    return 0;
}
