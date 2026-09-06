class RandomizedSet {
private:
    vector<int>nums;
    unordered_map<int,int>mp;
public:
    RandomizedSet() {
    
    }
    
    bool insert(int val) {
        if(mp.count(val))
        return false;

        mp[val]=nums.size();
        nums.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (!mp.count(val))
        return false;

        int index=mp[val];
        nums[index]=nums.back();
        mp[nums.back()]=index;
        nums.pop_back();
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int index = rand() % nums.size();
        return nums[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */