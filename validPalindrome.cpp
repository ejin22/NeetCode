class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right= s.length()-1;


        //This ensures we only compare letters and numbers, ignoring punctuation, spaces, etc.
        while(left<right){
            while(left< right && !alphaNum(s[left])){       //if s[left] is not a letter or digit
                left++;                                        //move forward
            }
            while(right> left && !alphaNum(s[right])){          //if s[right] is not a letter or digit
                right--;                                        //move backward
            }

            if(tolower(s[left])!= tolower(s[right])){       //Convert both characters to lowercase before comparing (so 'A' and 'a' are treated equally).
                return false;       //If any mismatch occurs → not a palindrome → return false.
            }
            left++;right--; //After successful comparison, move both pointers inward.
        }
        return true;
    }

    bool alphaNum(char c){
        return (c>= 'A' && c<='Z' ||
        c>= 'a' && c<='z' ||
        c>= '0' && c<='9' 
        );
    }

};
