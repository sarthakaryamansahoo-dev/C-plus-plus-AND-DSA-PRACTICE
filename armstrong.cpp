#include <iostream>
using namespace std;
int main() {
    int id;
    for (int i = 1; i <= 500; i++) {
        int sum=0;
        int x = i;
        while (x > 0) {
            id = x % 10;
            int nu = id * id * id;
            sum = sum + nu;
            x /= 10;
        }
        if (sum == i)
            cout << i << " ";
        
    }
}