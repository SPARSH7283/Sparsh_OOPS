class Solution {
public:
    string myCode(string s){
        int left = 0;
        int right = s.length() - 1;
        char arr[10] = {'a','e','i','o','u','A','E','I','O','U'};
        int leftIndex = -1;
        int rightIndex = -1;
        while(left<right){
            //  Agar koi space ho tab left ko aage or right ko piche krdo 
            if(s[left] == 32) left++;
            if(s[right] == 32) right--;
            //  check ki left side me koi vowel h ya nhi 
            for(int i=0; i<10; i++){
                if(s[left] == arr[i]) leftIndex = left;
            }
            // check ki right side me koi vowel h ya nhi
            for(int i=0; i<10; i++){
                if(s[right] == arr[i]) rightIndex = right;
            }
            // swap kro kuch basis pe agar dono -1 ke equal nhi h tabhi swap hoga agar ek bhi -1 ho tab swap nhi kr sakte 
           if(leftIndex!=-1 && rightIndex!=-1){
                swap(s[leftIndex],s[rightIndex]);
                // baad me -1 krdo nhi to swap statement next iteration me galt chalegi 
                leftIndex = -1;
                rightIndex = -1;
            };
            // yes sabse important h because suppose leftIndex me koi vowel mila but rightIndex me nhi mila tab yeh swap nhi krega or next iteration pe chala jega or next pe agar koi vowel hoga , or ussi time pe right me koi vowel mila tab wo uske sath swap krdega or 1st iteration wala vowel vahi rahejayga
            if(leftIndex==-1){
                left++;
            }
            if(rightIndex==-1) right--;
        }
        return s;
    }
    bool isVowel(char ch){
        // agar koi capital letter aayega to usko lowercase me krdega
        ch = tolower(ch);
        return ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    string reverseVowels(string s) {
        // love babbar code
        int l = 0;
        int h = s.length() - 1;
        while(l<h){
            if(isVowel(s[l]) && isVowel(s[h])){
                swap(s[l],s[h]);
                l++,h--;
            }
            else if(isVowel(s[l]) == 0) l++;
            else h--;
        }
        return s;
    }
};