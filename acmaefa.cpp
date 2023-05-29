#include <iostream>
#include <vector>
using namespace std;
const int N = 100010;
vector<int> adjM[N], adjF[N];
bool visM[N], visF[N];
void dfs(int u, vector<int> adj[], bool vis[])
{
    vis[u] = true;
    for (int v : adj[u])
    {
        if (!vis[v])
            dfs(v, adj, vis);
    }
}
int main()
{
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    while (p--)
    {
        int x, y;
        cin >> x >> y;
        if (x > 0 && y > 0)
            adjM[x].push_back(y), adjM[y].push_back(x);
    }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x < 0 && y < 0)
            adjF[-x].push_back(-y), adjF[-y].push_back(-x);
    }
    dfs(1, adjM, visM);
    dfs(-1, adjF, visF);
    int res = 1; // ��ʼ������Ϊ1
    for (int i = 1; i <= n; i++)
    {
        if (visM[i])
        {
            for (int j : adjM[i])
            {
                if (visM[j] || visF[-j])
                    continue; // �Ѿ����ʹ�������Ů�����ѣ�����
                res++;
                visM[j] = true;
                dfs(j, adjM, visM);
                dfs(-j, adjF, visF);
                break; // ֻ�ܺ͵�һ��δ���ʹ���������Գɹ�
            }
        }
    }
    cout << res << endl;
    return 0;
}