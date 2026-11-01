
class Solution {
public:
    bool isAnagram(string s, string t) {

        //Check lengths
        if (s.length() != t.length()) {
            return false;
        }

        //Create frequency array
        int count[26] = {0};

        //Count characters in s
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
        }

        //Decrease count for characters in t
        for (int i = 0; i < t.length(); i++) {
            count[t[i] - 'a']--;
        }

        //Check if all frequencies are zero
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
