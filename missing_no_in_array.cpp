#include <iostream>
#include<vector>
using namespace std;

void missingNumber(vector<int>&a, int N) {

    cout<<"Missing no is-> ";
    // Outer loop that runs from 1 to N:
    for (int i = 1; i <= N; i++) {

        // flag variable to check
        //if an element exists
        int flag = 0;
        
        //Search the element using linear search:
        for (int j = 0; j <= N - 1; j++) {
            if (a[j] == i) {

                // i is present in the array:
                flag = 1;
                // break;
            }
        }

        // check if the element is missing
        //i.e flag == 0:
        if (flag == 0) {
            cout<<i<<" ";
        }
    }

    // The following line will never execute.
    // It is just to avoid warnings.
    // return i;
}

int main()
{
    int N = 5;
    vector<int> a = {1,2,3,4,5};
    missingNumber(a, N);
    // cout << "The missing number is: " << ans << endl;
    return 0;
}

