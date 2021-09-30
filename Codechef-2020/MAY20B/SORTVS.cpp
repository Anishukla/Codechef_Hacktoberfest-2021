// Problem statement - https://www.codechef.com/MAY20B/problems/SORTVS
// Profile link - https://www.codechef.com/users/spooderman

#include<bits/stdc++.h>
using namespace std;
int ans;

void func(vector<vector<int>> group, vector<vector<int>> ele, int g, vector<int> vec)
{
	if(g==group.size())
	{
		int s=0;
		for (int i=0; i<vec.size(); i++)
		{
			if(vec[i]!=i)
			{
				for (int j=i+1; j<vec.size(); j++)
					if(vec[j]==i)
					{
						vec[j]=vec[i];
						vec[i]=i;
						s++;
						break;
					}
			}
		}
		ans=min(ans,s);
	}
	else if(group[g].size()==0)
	{
		func(group,ele,g+1,vec);
	}
	else{
	vector<vector<int>> t1, t2;
	for (int j=0; j<ele[g].size(); j++)
	{
		t1=group;
		t2=ele;
		vec[group[g][0]]=ele[g][j];
		t1[g].erase(t1[g].begin());
		t2[g].erase(t2[g].begin()+j);
		func(t1,t2,g,vec);
	}
	}
}

int main()
{
	int tc, n, m, a, b;
	cin >> tc;
	while(tc--)
	{
		cin >> n >> m;
		int per[n];
		int swap[n][n];
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				swap[i][j]=0;
		for (int i=0; i<n; i++)
		{
			cin >> per[i];
			per[i]--;
		}
		for (int i=0; i<m; i++)
		{
			cin >> a >> b;
			a--;
			b--;
			swap[a][b]=1;
			swap[b][a]=1;
		}

		for (int k=0; k<n; k++)
			for (int i=0; i<n; i++)
				for (int j=0; j<n; j++)
					if((swap[i][k]==1 && swap[k][j]==1) || swap[i][j]==1)
						swap[i][j]=1;

		int flag[n];
		for (int i=0; i<n; i++)
			flag[i]=0;

		vector<vector<int>> group;
		vector<vector<int>> ele;
		vector<int> vec, vec2;
		vector<int>::iterator itr;
		for (int i=0; i<n; i++)
		{
			vec.clear();
			if(flag[i]==0)
			{
				vec.push_back(i);
				flag[i]=1;
				for (int j=0; j<n; j++)
					if(swap[i][j]==1 && j!=i)
						{vec.push_back(j);flag[j]=1;}
			}
			group.push_back(vec);
		}
		ans=n;
		for (int g=0; g<group.size(); g++)
		{
			vec.clear();
			vec2.clear();
			for(int i=0; i<group[g].size(); i++)
				vec.push_back(per[group[g][i]]);
			for (int i=0; i<vec.size(); i++)
			{
				itr=find(group[g].begin(),group[g].end(),vec[i]);
				if(itr!=group[g].end())
					group[g].erase(itr);
				else
					vec2.push_back(vec[i]);
			}
			ele.push_back(vec2);
		}

		vec.clear();
		for (int i=0; i<n; i++)
			vec.push_back(i);

		func(group, ele, 0, vec);

		cout << ans << endl;
	}
}
