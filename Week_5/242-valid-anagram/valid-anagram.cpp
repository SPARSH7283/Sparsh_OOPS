class Solution {
public:
    void sortString(string &s){
        sort(s.begin(),s.end());
    }
    bool isAnagram(string s, string t) {
        sortString(s);
        sortString(t);
        if(s == t){
            return true;
        }
        else return false;
    }
};