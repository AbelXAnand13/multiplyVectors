//  Abel Anand

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;


void printVector(vector <int> const &a, int scalar) {
    cout << "Vector values multiplied by " << scalar << endl;
    for(int i=0; i < a.size(); i++){
   cout << a.at(i) * scalar << endl;
}
}

int main() {
    vector<int> nums;
    srand(time(0));
    int scalar;
    cout << "Enter a number you want to multiply to 50 random numbers\n";
    cin >> scalar;
    for (int i=0; i<=50; i++) {
        nums.push_back((rand()%100)+1);
    }
    printVector(nums, scalar);
}
