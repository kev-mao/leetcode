class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<tuple<int, int>> st;
        for(int i = 0; i < temperatures.size(); i++){
            while(!st.empty() && temperatures[i] > get<0>(st.top())){
                ans[get<1>(st.top())] = i - get<1>(st.top());
                st.pop();
            }

            stack<tuple<int, int>> temp; 
            st.push({temperatures[i], i});
        }
        return ans;

    }
};