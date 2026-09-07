class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1;
        int i=0;
        int write=0;
        while (i<chars.size())
        {
            char c = chars[i];
            int right=i+1;
            while (right < chars.size() && chars[right] == chars[i])
            {
                count++;
                right++;
            }
            chars[write++] = c;
            if (count > 1)
            {
                for (char digit : to_string(count))
                chars[write++] = digit; 
            }
           
            count=1;
            i=right;
        }
        return write;
    }
};