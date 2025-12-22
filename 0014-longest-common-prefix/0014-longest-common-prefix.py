class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs:
            return ""
        if len(strs) == 1:
            return strs[0]
        
        for i, char in enumerate(strs[0]):
            for j in range(1, len(strs)):
                if i >= len(strs[j]) or strs[j][i] != char:
                    return strs[0][:i]
        return strs[0]
#char* longestCommonPrefix(char** strs, int strsSize) { if (strsSize==0) return ""; // in case no string if (strsSize==1) return strs[0]; // in case kyn only one string for(int i=0;i<strs[0][i]!='\0';i++){ // traverse all characters of the first word char current =strs[0][i]; //keeping track for(int j=1;j<strsSize;j++){ //compare the first word with the others if (strs[j][i] == '\0' //if string end || strs[j][i] != current) //if string mismatch { strs[0][i] = '\0'; //cutting the prefix return strs[0]; } } } return strs[0]; }
#  my broken solution in C Language so i just gave up and translate this code in Py and somehow worked sometimes u just gotta change the environment i guess  hahahaha 