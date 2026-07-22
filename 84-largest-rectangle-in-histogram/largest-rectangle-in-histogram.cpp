class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int h=heights.size();
        vector<int> left(h), right(h);
        for(int i=0;i<h;i++){
           
            while(!st.empty()&&heights[st.top()]>=heights[i]){
                st.pop();
            }
             left[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while (!st.empty()) st.pop();
        for (int i = h - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            right[i] = st.empty() ? h : st.top();
            st.push(i);
        }
            int max_area=0;
        for(int i=0;i<h;i++){
            int width= right[i]-left[i]-1;
            int area=heights[i]* width;
        max_area=std::max(max_area, area);
        }
        return max_area;
    }
};