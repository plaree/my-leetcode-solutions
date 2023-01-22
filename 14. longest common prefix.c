/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/

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