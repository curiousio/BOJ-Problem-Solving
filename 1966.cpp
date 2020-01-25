#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int t, m, n;

	scanf("%d", &t);
	while (t--)
	{
		int cnt = 1;
		vector<int> q, priority_q;

		scanf("%d %d", &n, &m);
		q.resize(n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &q[i]);
			priority_q.push_back(q[i]);
		}
		sort(priority_q.begin(), priority_q.end(), greater<int>());

		while (true)
		{
			if (priority_q.front() == q.front())
			{
				if (m == 0)
				{
					printf("%d\n", cnt);
					break;
				}
				else
				{
					q.erase(q.begin());
					priority_q.erase(priority_q.begin());
					n--;
					m--;
					cnt++;
				}
			}
			else
			{
				q.push_back(q.front());
				q.erase(q.begin());
				if (m == 0)
				{
					m = n - 1;
				}
				else
				{
					m--;
				}
			}
		}
	}

	return 0;
}
