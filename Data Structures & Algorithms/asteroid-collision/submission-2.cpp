class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int a : asteroids) {
            bool alive = true;

            while (alive && a < 0 && !st.empty() && st.top() > 0) {
                int top = st.top();

                if (top < -a) {          // top explodes
                    st.pop();
                    continue;            // keep checking with new top
                } 
                if (top == -a) {         // both explode
                    st.pop();
                }
                alive = false;           // current a explodes (or both did)
            }

            if (alive) st.push(a);
        }

        vector<int> ans(st.size());
        for (int i = (int)st.size() - 1; i >= 0; --i) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};
