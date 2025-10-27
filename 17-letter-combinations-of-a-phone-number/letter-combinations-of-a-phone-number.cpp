class Solution {
public:
    void mappingNumberToString(unordered_map<char, string>& mp) {

        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
    }

    void combinations(string digits,int index, string &current, vector<string>&ans, unordered_map<char, string> &map){

         if(index==digits.size()){
            ans.push_back(current);
         }


       string str= map[digits[index]];

       for(int i=0;i<str.size();i++){

      current+=str[i];
       combinations(digits,index+1,current,ans,map);
       current.pop_back();

       }

    }
    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        string current="";
        unordered_map<char, string> map;

        mappingNumberToString(map);

      combinations(digits,0,current,ans,map);

        return ans;
    }
};