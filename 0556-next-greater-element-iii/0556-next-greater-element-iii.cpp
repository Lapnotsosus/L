class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int i=s.size()-2;
        int minindex = s.size()-1;
        int pivot=-1;
        while (i>=0)
        {
            if(s[i]<s[i+1])
            {
                pivot=i;
                break;
            }
            i--;
        }
        if (pivot == -1) return -1;
        while (s[minindex] <= s[pivot])
        {
            minindex--;
        }
        swap(s[pivot],s[minindex]);
        reverse(s.begin()+pivot+1 , s.end());
        long long ans = stoll(s);
        if (ans>INT_MAX || stoi(s)==n)
        return -1;
        else
        return (int)ans;
    }
};