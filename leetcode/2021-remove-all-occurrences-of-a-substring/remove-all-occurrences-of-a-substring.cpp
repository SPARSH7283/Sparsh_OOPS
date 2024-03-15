class Solution {
public:
    string removeOccurrences(string s, string part) {
    //     while(s.find(part) != string::npos){
    //         s.erase(s.find(part) , part.length());
    //     }
    //     return s;
    // }
    while(1){
        int found = s.find(part);
        if(s.find(part) == string::npos) break;
        string lP = s.substr(0,found);
        string rP = s.substr(part.size()+found,s.size());
        s = lP + rP;
    }
    return s;
    }
};