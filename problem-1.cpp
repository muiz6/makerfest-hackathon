#include <iostream>
#include <vector>

int largestNo(std::vector<int> &nums);
int largestIndex(std::vector<int>& nums);

int main()
{
    using namespace std;
    vector<int> myVec, comparison, buyDate, sellDate;
    int sizeOfvec, indexOfMin, indexOfMax;
    cout << "How long of array you wnt : ";
    cin >> sizeOfvec;
    for (int i = 0; i < sizeOfvec; i++) {
        int temp;
        cout << "Enter no for index " << i << " : ";
        cin >> temp;
        myVec.push_back(temp);
    }

    for (int i = 0; i < myVec.size(); i++) {
        vector <int> large;
        int buy = myVec.at(i);
        for (int j = i + 1; j < myVec.size(); j++) {
            if (myVec.at(j) > myVec.at(i)) {
                large.push_back(myVec.at(j));
            }
        }
        int sell = largestNo(large);
        comparison.push_back(sell - buy);
        buyDate.push_back(i + 1);
        sellDate.push_back(largestIndex(large));
    }

    int result = largestNo(comparison);
    int resultIndex = largestIndex(comparison);
    if (result > 0) {
        /*cout << "buy date : " << buyDate.at(resultIndex) << "\n";
        cout << "sell date : "<< sellDate.at(resultIndex) << "\n";*/
        cout << "profit : " << result << endl;
    }
    else {
        cout << "no chance of profit!\n";
    }

    return 0;
}

int largestNo(std::vector<int> &nums)
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

int largestIndex(std::vector<int> &nums) {
    if (nums.size() != 0) {
        int large = nums.at(0);
        int lIndex = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (large < nums.at(i)) {
                large = nums.at(i);
                lIndex = i;
            }
        }
        return lIndex;
    }
    return 0;
}
