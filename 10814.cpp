#include <iostream>
#include <algorithm>
#include <cstdio>

struct coord
{
    int age;
    char name[101];
} a[100000];

bool cmp(struct coord f, struct coord b)
{
    if (f.age < b.age)
    {
        return true;
    }

    return false;
}

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &a[i].age, a[i].name);
    }

    std::stable_sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", a[i].age, a[i].name);
    }

    return 0;
}
