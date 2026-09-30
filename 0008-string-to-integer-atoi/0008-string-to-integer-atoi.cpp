class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long long ans = 0;

        // Skip leading spaces
        while (i < s.size() && s[i] == ' ')
            i++;

        // Sign
        if (i < s.size() && s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if (i < s.size() && s[i] == '+')
        {
            i++;
        }

        while (i < s.size() && isdigit(s[i]))
        {
            int digit = s[i] - '0';

            if (ans > INT_MAX / 10 ||
                (ans == INT_MAX / 10 && digit > INT_MAX % 10))
            {
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }

        return ans * sign;
    }
};