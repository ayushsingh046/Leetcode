#include <string.h>

int expandAroundCenter(char* s, int left, int right, int len) {
    while (left >= 0 && right < len && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

char* longestPalindrome(char* s) {
    if (s == NULL || *s == '\0') return s;
    
    int start = 0;
    int end = 0;
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        int len1 = expandAroundCenter(s, i, i, len);       
        int len2 = expandAroundCenter(s, i, i + 1, len);   
        
        int max_len = (len1 > len2) ? len1 : len2;
        
        if (max_len > (end - start)) {
            start = i - (max_len - 1) / 2;
            end = i + max_len / 2;
        }
    }
    s[end + 1] = '\0';
    return s + start;
}
