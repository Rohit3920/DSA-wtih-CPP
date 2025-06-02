#include <iostream>

using namespace std;

int decToBinary(int num ){
    int ans = 0, pow = 1;
    while ( num > 0){
        int res = num % 2;
        num /= 2;
        ans += (res * pow);
        pow *= 10;
    }
    return ans;
}

int binToDecimal(int bNum){
    int ans = 0, pow = 1;

    while ( bNum > 0){
        int res = bNum % 10;
        bNum %= 10;
        ans = (res * pow);
        pow *= 2;
    }
    return ans;
}

int main(){
    for (int i = 1; i <= 100; i++){
        int num = decToBinary(i);
    // cout << "decimal no is " << i << " to this binary form " << decToBinary(i) << endl;
    cout << "binary no is " << num  << " to this decimal form " << binToDecimal(num) << endl;

    }


    return 0;
}