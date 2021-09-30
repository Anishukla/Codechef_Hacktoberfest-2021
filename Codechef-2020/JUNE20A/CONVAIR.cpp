// problem - https://www.codechef.com/JUNE20A/problems/CONVAIR
// profile - https://www.codechef.com/users/spooderman

#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

vector <pair<int,int>> hoho;
vector <pair<int,int>> hoho2;
int f=1;
int A=0;
void dfs(int i, int n, vector <vector<int>> &graph, vector <int> &vis, vector <int> &nodes, int h)
{
	vis[i]=1;
	nodes.push_back(i);
	int fh=0;
	for (int j=0; j<graph[i].size(); j++)
	{
		if(vis[graph[i][j]]==0)
			dfs(graph[i][j],n,graph,vis,nodes,i);
		else if(vis[graph[i][j]]==1 && h==graph[i][j] && fh==0)
			fh=1;
		else if(vis[graph[i][j]]==1 && f==1 && ((h!=graph[i][j]) || (h==graph[i][j] && fh==1)))
		{
			f=0;
			hoho.push_back(make_pair(min(i,graph[i][j]),max(i,graph[i][j])));
		}
		else if(vis[graph[i][j]]==1 && f==0 && ((h!=graph[i][j]) || (h==graph[i][j] && fh==1)))
		{
			hoho2.push_back(make_pair(min(i,graph[i][j]),max(i,graph[i][j])));
		}
	}
	vis[i]=2;
}

vector <vector<int>> find_comp(int n, vector <vector<int>> &graph)
{
	vector <int> vis(n, 0);
	vector <vector<int>> ans;
	vector <int> nodes;
	hoho.clear();
	hoho2.clear();
	A=0;
	for (int i=0; i<n; i++)
	{
		if(vis[i]==0)
		{
			f=1;
			nodes.clear();
			dfs(i, n, graph, vis, nodes, -1);
			ans.push_back(nodes);
			if(f==1)
				{A++;hoho.push_back(make_pair(-1,-1));}
		}
	}
	return ans;
}


int main()
{
	int tc, n, m, a, b, inc, t, I, S=0;
	cin >> tc;
	while(tc--)
	{
		S=0;
		cin >> n >> m;

		vector <pair<int,int>> edge;
		vector <pair<int,int>> edged;
		inc=0;
		vector <vector<int>> graph(n);
		vector <vector<int>> comp;

		for (int i=0; i<m; i++)
		{
			cin >> a >> b;
			if(a>b)
			{
				t=a;
				a=b;
				b=t;
			}
			graph[a-1].push_back(b-1);
			graph[b-1].push_back(a-1);
			edge.push_back(make_pair(a-1,b-1));
		}

		comp = find_comp(n, graph);

		if(comp.size()>1)
		{
			if(A==0)
			{
				edge.push_back(make_pair(min(hoho[0].first,hoho[hoho.size()-1].second),max(hoho[0].first,hoho[hoho.size()-1].second)));
				for (int i=0; i<hoho.size(); i++)
				{
					edged.push_back(hoho[i]);
					if(i>0)
						edge.push_back(make_pair(min(hoho[i-1].second,hoho[i].first),max(hoho[i-1].second,hoho[i].first)));
				}
			}
			else if (A==1)
			{
				for (int i=0; i<hoho.size(); i++)
				{
					if(hoho[i].first!=-1)
						edged.push_back(hoho[i]);
					else
					{
						a=comp[i][0];
						if(comp[i].size()==1)
						{
							inc=inc+2;
							b=-1;
						}
						else
						{
							b=graph[comp[i][0]][0];
							edged.push_back(make_pair(min(a,b),max(a,b)));
						}
					}
				}
				
				for (int i=0; i<hoho.size(); i++)
				{
					if(hoho[i].first!=-1)
					{
						edge.push_back(make_pair(min(a,hoho[i].first),max(a,hoho[i].first)));
						a=hoho[i].second;
					}
				}
				if(b!=-1)
					edge.push_back(make_pair(min(a,b),max(a,b)));
			}
			else
			{
				a=-1;
				f=1;
				for (int i=0; i<hoho.size(); i++)
				{
					if(hoho[i].first!=-1 && f==1)
					{
						edged.push_back(hoho[i]);
						f=0;
						b=hoho[i].first;
						a=hoho[i].second;
					}
					else if(hoho[i].first!=-1 && f==0)
					{
						edged.push_back(hoho[i]);
						edge.push_back(make_pair(min(a,hoho[i].first),max(a,hoho[i].first)));
						a=hoho[i].second;
					}
				}
				if(f==0)
				{
					hoho2.push_back(make_pair(min(a,b),max(a,b)));
					edge.push_back(make_pair(min(a,b),max(a,b)));
				}
				I=0;
				S=hoho2.size();
				for (int i=0; i<hoho.size(); i++)
				{
					if(hoho[i].first==-1 && comp[i].size()>1 && I<S)
					{
						hoho[i].first=0;
						a=comp[i][0];
						b=graph[comp[i][0]][0];
						edge.push_back(make_pair(min(a,hoho2[I].first),max(a,hoho2[I].first)));
						edge.push_back(make_pair(min(b,hoho2[I].second),max(b,hoho2[I].second)));
						edged.push_back(hoho2[I]);
						I++;
						edged.push_back(make_pair(min(a,b),max(a,b)));
					}
				}
				f=1;
				for (int i=0; i<hoho.size(); i++)
				{
					if(hoho[i].first==-1 && I<S && f==1)
					{
						f=0;
						inc=inc+2;
						edged.push_back(hoho2[I]);
						edge.push_back(make_pair(min(hoho2[I].first,comp[i][0]),max(hoho2[I].first,comp[i][0])));
						a=comp[i][0];
					}
					else if(hoho[i].first==-1 && I<S && f==0)
					{
						f=1;
						edge.push_back(make_pair(min(hoho2[I].second,comp[i][0]),max(hoho2[I].second,comp[i][0])));
						I++;
						a=comp[i][0];
					}
					else if(hoho[i].first==-1 && I==S)
					{
						if(a==-1)
							a=comp[i][0];
						else
						{
							inc=inc+2;
							edge.push_back(make_pair(min(a,comp[i][0]),max(a,comp[i][0])));
						}
					}
				}
			}

			sort(edge.begin(),edge.end());
			sort(edged.begin(),edged.end());
			I=0;
			S=edged.size();
			for (int i=0; i<edge.size(); i++)
			{
				if(I==S)
					break;
				if(edge[i]==edged[I])
				{
					edge[i].first=-1;
					I++;
				}
			}
		}

		cout << inc << " " << edge.size()-S << "\n";
		for (int i=0; i<edge.size(); i++)
			if(edge[i].first!=-1)
				cout << edge[i].first+1 << " " << edge[i].second+1 << "\n";
	}
}
