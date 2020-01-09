// question5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
int largestNo(std::vector<int>& nums);
int main()
{
    using namespace std;
    
    vector <int> data;
    int count;
    cout << "How many elements : ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        int temp;
        cout << "Enter value for index " << i << " : ";
        cin >> temp;
        data.push_back(temp);
    }

    for (int i = 1; ; i++) {
        bool flag = false;
        for (int j = 0; j < data.size(); j++) {
            if (i == data.at(j)) {
                flag = true;
            }
        }
        if (!flag) {
            cout << "missing : " << i;
            break;
        } 
    }

    return 0;
}

int largestNo(std::vector<int>& nums)
{
    if (nums.size() != 0) {
        int large = nums.at(0);
        for (int i = 1; i < nums.size(); i++) {
            if (large < nums.at(i)) {
                large = nums.at(i);
            }
        }
        return large;
    }
    return 0;
}