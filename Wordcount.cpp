class Solution {
public:
    int lengthOfLastWord(string s) {
        string str; 
        
        stringstream str_strm(s);
        vector<string> sen; 
        while (str_strm >> str) {
            sen.push_back(str);
        }
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        if(s.length()==0){
            return 0;
        }
        return sen[sen.size()-1].length();
    }
};
