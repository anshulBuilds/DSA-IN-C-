//Array hashing
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//   int n;
//   cout << "Enter the number of elements: ";
//   cin >> n;
//   int arr[5];
//   for(int i=0;i<n;i++){
//     cout << "Enter the " << i+1 << " element: ";
//     cin >> arr[i];
//   }

//   int hash[10] = {0};
//   for(int i=0;i<n;i++){
//     hash[arr[i]]++;

//   }
  
//   int q;
//   cout << "Enter the number of queries: ";
//   cin >> q;
//   for(int i=0;i<q;i++){
//     int num;
//     cout << "Enter the number to find frequency: ";
//     cin >> num;
//     cout << hash[num] << endl;
//   }

// }


//Character hashing

/*
#include<iostream>
using namespace std;
#include<unordered_map>

int main(){
  int n;
  cout << "Enter the number of elements of the character: ";
  cin >> n;
  char ch[5];
  for(int i=0;i<n;i++){
    cout << "Enter the " << i+1 << " element: ";
    cin >> ch[i];
  }

  int hash[123] = {0};
  for(int i=0;i<n;i++){
    hash [ch[i]]++;
  }

  int q;
  cout << "Enter the number of queries: ";
  cin >> q;
  while(q--){
    char ch1;
    cout << "Enter the character to find frequency: ";
    cin >> ch1;
    cout << hash[ch1] << endl;
  }
}
*/

//Frequency Count (Foundational – Asked Directly)

// Question:
// Given an array, print frequency of each element.
//Input: [1, 2, 2, 3, 1]

/*
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int FrequencyCount(vector<int> nums){
    int n = nums.size();
    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
      mpp[nums[i]]++;
    }

    for(auto it:mpp){
      cout << it.first << " -> " << it.second << endl;
    }
}

int main(){
  vector<int> nums;
  for(int i=0;i<5;i++){
    int x;
    cout << "Enter the elements for the nums: ";
    cin >> x;
    nums.push_back(x);
  }
  FrequencyCount(nums);
}
*/


// First Non-Repeating Element (VERY COMMON)
// Input: [4, 5, 4, 6, 5, 7]
// Output: 6

/*
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int Non_Repeating(vector<int> nums){

  int n = nums.size();
  unordered_map<int,int> mpp;
  for(int i=0;i<n;i++){
      mpp[nums[i]]++;
  }
  for(int num : nums){
      if(mpp[num]==1){
        return num;
      }
  }
  return -1;
}

int main(){
  vector<int> nums;
    for(int i =0;i<6;i++){
      int x;
      cin >> x;
      nums.push_back(x);
    }

  int result = Non_Repeating(nums);
  cout << "The first non-repeating element is: " << result << endl;
}
*/


// Count Distinct Elements

// Problem
// Return the number of distinct elements in the array.

// Example
// Input: [1, 2, 2, 3, 3, 3]
// Output: 3
/*
#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

int Count_Distinct(vector<int> nums){
  int n= nums.size();
  unordered_map<int,int> mpp;
  for(int i=0;i<n;i++){
    mpp[nums[i]]++;
  }

  return mpp.size();

}

int main(){
  vector<int> nums;
  int x;
  for(int i=0;i<6;i++){
    cin >> x;
    nums.push_back(x);
  }
  int result = Count_Distinct(nums);
  cout <<"distinct elements in the array is: " << result << endl;
}
*/


// Check If Array Has Duplicates

// Problem
// Return true if any number appears more than once.

// Example
// Input: [1, 2, 3, 1]
// Output: true

// Interview Angle

// Early exit using hashing

// Space–time tradeoff
/*
#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

bool Check_Duplicates(vector<int> nums){
  int n = nums.size();
  unordered_map<int,int> mpp;
  for(int i=0;i<n;i++){
    mpp[nums[i]]++;
  }

  for(auto it:mpp){
    if(it.second > 1){
      return true;
    }
    
  }
  return false;
}

int main(){
  vector<int> nums;
  int x;
  for(int i=0;i<5;i++){
    cin >> x;
    nums.push_back(x);
  }
  int result = Check_Duplicates(nums);
  cout << boolalpha << result << endl;
}
*/

