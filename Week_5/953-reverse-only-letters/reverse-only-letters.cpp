class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i =0; 
        int j = s.size() - 1;
        while(i<j){
            if(s[i]>32 && s[i] < 65 || s[i] >90 && s[i]<97 || s[i] > 122 && s[i] <127){
                i++;
            }
            else if(s[j]>32 && s[j] < 65 || s[j] >90 && s[j]<97 || s[j] > 122 && s[j] <127){
                j--;
            }
            else{
                swap(s[i],s[j]);
                i++,j--;
            }
        }
        return s;
    }
};