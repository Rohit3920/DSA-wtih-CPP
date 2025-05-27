#include <iostream>

using namespace std;

int main(){
    cout << "second problem pattern " <<endl;
    int n = 4;

cout << "-------------------------------------------------------------" << endl;

for (int i =0; i < n; i++ ){
    for(int j = 0; j <= i; j++ ){
        cout<< " *";
        }
    cout << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
    for(int i = 0; i< n; i++){

        for(int j = 0; j < n-i; j++){
            cout << " ";
        }

        for (int j = 0; j <= i; j++){
            cout<< " *";
        }

        cout << endl;
    }
    cout << "-------------------------------------------------------------" << endl;
int num = 0;
for (int i =0; i < n; i++ ){
    for(int j = 0; j <= i; j++ ){
        cout<< ++num << " ";
    }
    cout << endl;
}
cout << "-------------------------------------------------------------" << endl;

return 0;
}