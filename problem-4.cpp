#include <iostream>
#include <vector>
using namespace std;

int max(std::vector <int> data);
int maxIndex(std::vector <int> data);

int main(int argc, char **argv) {
    int count;
    vector <int> data, comparison;
    vector <int> firstLine, secondLine;

    cout << "How many values? : ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        int temp;
        cout << "Enter value for index " << i << " : ";
        cin >> temp;
        data.push_back(temp);
    }

    for (int i = 0; i < data.size(); i++) {
        for (int j = i + 1; j < data.size(); j++) {
            int area;
            int width = abs(i - j);
            if (data.at(i) < data.at(j)) {
                area = data.at(i) * width;
            }
            else {
                area = data.at(j) * width;
            }
            comparison.push_back(area);
            firstLine.push_back(i + 1);
            secondLine.push_back(j + 1);
        }
    }

    cout << "largest area : "<< max(comparison) << endl;
    int index = maxIndex(comparison);
    cout << "first line positon : " << firstLine.at(index) << endl;
    cout << "second line position : " << secondLine.at(index) << endl;

    cin.get();
    system("pause");
    return 0;
}

int max(std::vector <int> data) {
    if (data.size() != 0)
    {
        int result = data.at(0);
        for (int i = 1; i < data.size(); i++) {
            if (result < data.at(i)) {
                result = data.at(i);
            }
        }
        return result;
    }
    return 0;
}

int maxIndex(std::vector <int> data) {
    int target = max(data);
    for (int i = 0 ; i < data.size(); i++) {
        if (target == data.at(i)) {
            return i;
        }
    }
    return 0;
}