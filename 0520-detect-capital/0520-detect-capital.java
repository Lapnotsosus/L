class Solution {
    public boolean detectCapitalUse(String word) {
        int count =0;
        int len = word.length();
        for (int i=0 ; i<len; i++)
        {
            if (Character.isUpperCase(word.charAt(i)))
            count++;
        }
        if (Character.isUpperCase(word.charAt(0)) && count ==1)
        return true;
        else if (count == len)
        return true;
        else if (count == 0)
        return true;
        return false;
    }
}