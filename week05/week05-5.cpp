class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//可將字串string變成cout的iostream
        string word;
        while(ss>>word){//一直讀，讀完才離開

        }
        return word.length();
    }
};