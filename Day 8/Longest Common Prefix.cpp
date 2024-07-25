class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string ans="";
        
        int len=strs.size();
        if(len==0)
            return "";
        
        int k=strs[0].length();
        for(int i=0;i<k;i++){
        
            for(int j=1;j<len;j++){

                if(strs[0][i]!=strs[j][i])
                    return ans;
            }
            ans=ans+strs[0][i];
            
        }
        return ans;
    }
};