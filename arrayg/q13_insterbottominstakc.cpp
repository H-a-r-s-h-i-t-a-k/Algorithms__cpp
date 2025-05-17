class Solution
{
public:
  stack<int> solve(stack<int> st, int x)
  {
    if (st.empty())
    {

      st.push(x);

      return st;
    }
    int num = st.top();
    st.pop();

    solve(st, x);
    st.push(num);
  }

  stack<int> insertAtBottom(stack<int> st, int x)
  {

    return solve(st, x);
  }
};
