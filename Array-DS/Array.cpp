#include<iostream>

using namespace std;

int main(){

    int arr[];
    int size = 6;

    for(int i =0; i < size; i++){
        cout << "Enter " << i <<" th number : "<< endl;
        cin >> arr[i];
    }

    for(int i =0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}