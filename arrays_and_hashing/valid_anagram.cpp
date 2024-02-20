/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/
#include <iostream>
#include <string>
#include <queue>
#include <map>


using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        priority_queue<char> s_queue, t_queue;

        for (int i = 0; i < s.size(); ++i)
        {
            s_queue.push(s[i]);
            t_queue.push(t[i]);
        }
        for (int i = 0; i < s.size(); ++i)
        {
            if (s_queue.top() != t_queue.top())
                return false;
            s_queue.pop();
            t_queue.pop();
            
        }
            return true; 

    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        
        map<char, int> s_map, t_map;

        for (int i = 0; i < s.size(); ++i) {
            s_map[s[i]]++;
            t_map[t[i]]++;
        }
        
        for (auto it = s_map.begin(); it != s_map.end(); ++it) {
            if (it->second != t_map[it->first]) {
                return false;
            }
        }
        
        return true;
    }
};