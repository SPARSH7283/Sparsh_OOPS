class Solution {
public:
    string reverseVowels(string s) {
    int left = 0;
    int right = s.length() - 1;
    char arr[10] = {'a','e','i','o','u','A','E','I','O','U'};
    int leftIndex = -1;
    int rightIndex = -1;
    while(left<right){
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
       if(leftIndex!=-1 && rightIndex!=-1){
            swap(s[leftIndex],s[rightIndex]);
            leftIndex = -1;
            rightIndex = -1;
        };
        if(leftIndex==-1){
            left++;
        }
        if(rightIndex==-1) right--;
    }
    return s;
    }
};