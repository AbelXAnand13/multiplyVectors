//Abel Anand

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

vector<int> nums;

int main() {
    srand(time(0));
    int scalar;
    cout << "Enter a number you want to multiply to 50 random numbers\n";
    cin >> scalar;
    for (int i=0; i<=50; i++) {
        cout << ((rand()%100)+1) * scalar << endl;
    }
}
 
