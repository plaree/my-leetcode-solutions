char * longestCommonPrefix(char ** strs, int strsSize){
   int i = 0;
   int j = 0;
    char c;

    if (strsSize == 0){
        return "";
    } 
    
    while (c = strs[0][j]) {
        for (i = 1; i < strsSize; i ++) {
            if (strs[i][j] != c) {
                strs[0][j] = 0;
                return strs[0];
            }
        }
        j ++;
    }
    strs[0][j] = 0;
    return strs[0];
    }