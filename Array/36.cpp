    // given an array of integers put all the 1s to the end of the array , while maintaing the relative postion of all the other elements;
    // a[] = {3, 1, 4, 5, 1, 1, 4}
    // output {3,4,5,4,1,1,1}
    
    #include <iostream>
using namespace std;

int main() {

    int arr[] = {1,3,4,1,1,6,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int j = 0;  // position for non-1

    for(int i=0;i<n;i++){

        if(arr[i] != 1){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

    