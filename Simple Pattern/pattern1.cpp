#include <iostream>

using namespace std;

int main(){
    int n = 4;

cout << "-------------------------------------------------------------" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }
cout << "-------------------------------------------------------------" << endl;
    for(int i = 0; i < n; i++){
    char ch = 'A';
        for(int j = 0; j < n; j++){
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
cout << "-------------------------------------------------------------" << endl;
	for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << " *";
        }
        cout << endl;
    }
cout << "-------------------------------------------------------------" << endl;

    return 0;
}