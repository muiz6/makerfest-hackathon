#include <iostream>
#include <vector>
#include <string>

int main()
{
    using namespace std;
    vector<int> myVec,small;
    int count,target;
    cout << "Enter the size of the array : ";
    cin >> count;
    
    for (int i = 0; i < count; i++) {
        int temp;
        cout << "Enter value for index " << i<<" : ";
        cin >> temp;
        myVec.push_back(temp);
    }

    cout << "Enter the target : ";
    cin >> target;
    bool flag = false;
    for (int i = 0; i < myVec.size(); i++) {
        if (myVec.at(i) == target) {
            count = i;
            flag = true;
            break;
        }
        if (myVec.at(i) < target) {
            small.push_back(i);
        }
    }
    /*if (!flag) {
        for (int i = 0,j=1; i < myVec.size(); i++,j++)
        {
            if (target > myVec.at(i) && target < myVec.at(j)) {
                count=
            }
        }
    }*/

    if (flag) {
        cout << "number found at : " << count << endl;
    }
    else {
        cout << "number not found!\n";
        cout << "expected position "<< small.size();
    }
    return 0;
}