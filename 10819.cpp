#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
	int n, max_sum = 0;

	scanf("%d", &n);

	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
	}
	sort(v.begin(), v.end());

	do
	{
		int sum = 0;
		for (int i = 0; i < v.size() - 1; i++)
		{
			sum += abs(v[i] - v[i + 1]);
		}
		max_sum = max(max_sum, sum);
	} while (next_permutation(v.begin(), v.end()));

	printf("%d", max_sum);

	return 0;
}
