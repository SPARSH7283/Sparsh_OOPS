class Solution {
public:
    string reorganizeString(string s) {
        //  phele hashing krenge usse count nikal lenge per character ka 
        //  fir check krenge max char kya h 
        // uske max char ko place krenge 1 ke gap pe agar hojata to solution "" return nhi krega varna karega
        // ab jab sab place hogaye to baaki ko place krdo 2 ke gap pe 


        // hashing
        int hash[26] = {0};
        for(int i = 0; i<s.size(); i++){
            hash[s[i] - 'a']++;
        }
        // check the most occurant
        int mostFrequency = INT_MIN;
        char mostOccurant;
        for(int i=0; i<26; i++){
            if(hash[i]>mostFrequency){
                mostFrequency = hash[i];
                mostOccurant = i+'a';
            }
        }
        // most occurant ko place krdiya
        int index = 0;
        while(mostFrequency>0 && index<s.length()){
            s[index] = mostOccurant;
            index+=2;
            mostFrequency--;
        }
        // check ki most occurant string ki length me fit aara h ya nhi 
        if(mostFrequency!=0){
            return "";
        }
        hash[mostOccurant - 'a'] = 0;
        for(int i=0; i<26; i++){
            while(hash[i]>0){
                index = index>=s.length()? 1: index;
                s[index] = i + 'a';
                hash[i] -- ;
                index+=2;
            }
        }
        return s;
    }
};