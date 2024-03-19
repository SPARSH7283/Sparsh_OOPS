class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char arr[300] = {0};
        for(int i=0; i<s.length(); i++){
            if(arr[s[i]] == 0){
                for(int j=0; j<=i; j++){
                    for(int k=0; k<=i; k++){
                        if(s[j]!=s[k+1])  if(t[j] == t[k+1]) return false;
                       
                    }
                }
                arr[s[i]] = t[i];
            }
            else if(arr[s[i]]!=0){
                char temp = s[i];
                if(arr[temp]!=t[i]) return false;
            }
        }
        return true;
    }
};