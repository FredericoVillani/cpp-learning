#include <iostream>

using namespace std;

int main(){
int N, I1, I2, K;
int x = 0;
K = 0;
I1 = 0;
I2 = 0;
cin >> N;
while (N > x and N>=2 and N<= (10*10*10*10*10*10)){
    cin >> K;
    if (K == 1){
    I1 = I1 + 1;
    }
    if (K == 2){
        I2 = I2 + 1;
        I1 = I1 + 1;
    }
    x = x + 1;
}
cout << (I1%2) << (I2%2);

}


