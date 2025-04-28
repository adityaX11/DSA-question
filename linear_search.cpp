// Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. 
// If the target is not found in the array, return -1

// Input: nums = [2, 3, 4, 5, 3], target = 3
// Output: 1
// Explanation: The first occurence of 3 in nums is at index 1

// Input: nums = [2, -4, 4, 0, 10], target = 6
// Output: -1
// Explanation: The value 6 does not occur in the array, hence output is -1

#include<iostream>
#include<vector>

using namespace std;
int linearSearch(vector<int>& nums, int target) {
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i] == target){  // if i here check declare the any other block like else then this for loop is run only one time .
            return i;
        }
    }
    return -1;
}
int main(){
    int n;   // n is define how many element you want in given vector;
    cout<<"Enter the no of element in nums: ";
    cin>>n;

    vector <int> nums;
    // take I/P in nums
    cout<<"Enter you elements-> ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }


    // print the give vector
    cout<<"Your given nums-> ";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    // choose the target elment which you u want to find the index.
    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    // here call the searching function.
    int result=linearSearch(nums,target);
    cout<<"Target element index is-> "<<result<<endl;
    return 0;
}