#include <stack>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	long long int cnt = 0;
	stack<long long int> st;
	vector<long long int> height;

	scanf("%d", &n);
	height.resize(n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &height[i]);
		while (!st.empty() && st.top() <= height[i])
		{
			st.pop();
		}
		st.push(height[i]);
		cnt += st.size() - 1;
	}

	printf("%lld\n", cnt);

	return 0;
}
