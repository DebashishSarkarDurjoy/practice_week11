#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// bool isAnagram(unordered_map<char, int> &m_window, unordered_map<char, int> &m_word) {
//     bool is_anagram = true;

//     if (m_window.size() != m_word.size()) return false;

//     for (auto word_p: m_word) {
//         if (m_window.find(word_p.first) == m_window.end() || m_window[word_p.first] != m_word[word_p.first]) return false;
//     }

//     return is_anagram;
// }

int main(void) {
    vector<int> indices;

    string s = "abcxaba";
    string word = "ab";

    unordered_map<char, int> word_map;
    for (char c: word) {
        word_map[c]++;
    }

    for (int i = 0; i <= s.size() - word.size(); i++) {
        unordered_map<char, int> window_map;
        
        for (int j = i; j <= i + word.size() - 1; j++) {
            window_map[s[j]]++;
        }
        
        if (window_map == word_map) {
            indices.push_back(i);
        }
    }

    for (int i: indices) cout << i << " ";
    cout << endl;


    return 0;
}