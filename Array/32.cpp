
    //given an integers,left rotate the array by d position
    // int arr[] = {12,32,443,4,34}; d=3
//   output: int arr[] = {4,34,12,32,443};

 #include <iostream>
using namespace std;
int main() {

  int arr[] = {12,32,443,4,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    while(d!=0){
        int temp = arr[0];
          for(int i=1;i<n;i++  ){
            arr[i-1]=arr[i];
            
    }
    arr[n-1]=temp;
    d--;
    }
    
  
    
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }

    return 0;
}

// n = 100000
// d = 50000

// Your program becomes VERY slow.

// BEST Approach (Reverse Method)


// Method	 Time	   Good?
// Shifting	O(n*d)	
// Reverse	O(n)	


