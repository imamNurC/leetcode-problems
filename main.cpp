#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
// A simple function to add two numbers
int add(int a, int b) {
    return a + b;
}

class Calculator {
public:
    // A member function to multiply two numbers
    int multiply(int a, int b) {
        return a * b;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    return {i, j};
                }
            }
        }
        // Return an empty vector if no solution is found
        return {};
    }
};

class Soulution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;

        for(int i = 0; i < nums.size(); ++i ){
            hash[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end() && hash[complement] != i) {
                return {i, hash[complement]};
            }
        }
        return {};

    }
};


int main() {
    vector<int> num = {2,7,11,15};
    int target = 9;

    int x = 5;
    int y = 3;

    // Using the standalone function 'add'
    int sum = add(x, y);
    cout << "Sum: " << sum << endl;

    // Using a class and member function
    Calculator calc;
    int product = calc.multiply(x, y);
    cout << "Product: " << product << endl;

    cout << "==========================" << endl;
    Solution sol;
    vector<int> res = sol.twoSum(num, target); 
    cout << "Result: ";
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;

    cout << "==========================" << endl;


    Soulution2 sol2;
    vector<int> solver = sol2.twoSum(num, target);

    cout << "HashTable: ";
    for (int i : solver) {
        cout << i << " ";
    }
    cout << endl;

    



    return 0;
}