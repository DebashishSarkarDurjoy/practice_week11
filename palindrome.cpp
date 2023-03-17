#include <iostream>
#include <vector>

using namespace std;

bool is_palindrome(string word) {
    string word2 = word;
    reverse(word.begin(), word.end());
    return word == word2;
}

vector<pair<int,int>> palindromic_pairs(vector<string> &words) {
    vector<pair<int,int>> result;

    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words.size(); j++) {
            if (i == j) continue;

            if (is_palindrome(words[i] + words[j])) result.push_back({i, j});
        }
    }

    return result;
}

int main(void) {
    vector<string> words = {"code", "edoc", "da", "d"};

    vector<pair<int,int>> indices = palindromic_pairs(words);

    for (auto p: indices) {
        cout << "(" << p.first <<  ", " << p.second << ")" << endl;
    }


    return 0;
}