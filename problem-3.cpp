#include <iostream>
#include <string>
#include <vector>

std::string reversString(std::string &str);

int main()
{
    using namespace std;
    string input;
    cout << "Enter your word : ";
    getline(cin, input);
    vector<string> palin;
    for (int i = 0; i < input.length(); i++) {
        for (int j = input.length()-1; j >= 0; j--) {
            string temp = input.substr(i, j + 1);
            string reverse = (reversString(temp));
            if (temp == reverse) {
                palin.push_back(temp);
            }
        }
    }
    int length = palin.at(0).length();
    std::string l = palin.at(0);
    for (int i = 1; i < palin.size(); i++) {
        if (palin.at(i).length() > length) {
            length = palin.at(i).length();
            l = palin.at(i);
        }
    }
    cout << "Longest palindrom is : " << l << endl;
    return 0;
}

std::string reversString(std::string &str) {
    int length = str.length() - 1;
    std::string temp;
    for (int i = length; i >= 0; i--) {
        temp += str.at(i);
    }
    return temp;
}