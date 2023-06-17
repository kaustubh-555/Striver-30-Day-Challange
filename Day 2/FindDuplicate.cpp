class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        set<int> st;
        int n=arr.size();
        for (int i = 0; i < n; i++)
        {
            int prevSize = st.size();
            st.insert(arr[i]);
        if (st.size() == prevSize)
             return arr[i];
        }
        return -1;
    }
};