//時間複雜度 O(n)
//空間複雜度 O(1)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;  
        while(i<j)
        {
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            
            i++;
            j--;
        }
    }
};
