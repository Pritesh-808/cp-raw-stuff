// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



bool check(int x,int y,int size)
{
    if(x>0&&y>0&&x<size+1&&y<size+1)
    return true;
    else
    return false;
}

void dfs(vector<vector<int>>&vis,vector<vector<int>>&dis,int n,int cnt,vector<pair<int,int>>&ans,int e1,int e2)
{
    vector<pair<int,int>>another;
    for(auto it:ans)
    {
        
            int x=it.first,y=it.second;
            //cout<<"x:"<<x<<" y:"<<y<<" cnt:"<<cnt<<endl;
            if(check(x-2,y+1,n)&&vis[x-2][y+1]==-1)
            {
                dis[x-2][y+1]=cnt;
                vis[x-2][y+1]=1;
                if((x-2)==e1&&(y+1)==e2)
                return;
                another.push_back(make_pair(x-2,y+1));
                
            }
            if(check(x-2,y-1,n)&&vis[x-2][y-1]==-1)
            {
                dis[x-2][y-1]=cnt;
                vis[x-2][y-1]=1;
                if((x-2)==e1&&(y-1)==e2)
                return;
                another.push_back(make_pair(x-2,y-1));
                
                
            }
            if(check(x-1,y+2,n)&&vis[x-1][y+2]==-1)
            {
                dis[x-1][y+2]=cnt;
                vis[x-1][y+2]=1;
                if((x-1)==e1&&(y+2)==e2)
                return;
                another.push_back(make_pair(x-1,y+2));
                
                
            }
            if(check(x-1,y-2,n)&&vis[x-1][y-2]==-1)
            {
                dis[x-1][y-2]=cnt;
                vis[x-1][y-2]=1;
                if((x-1)==e1&&(y-2)==e2)
                return;
                another.push_back(make_pair(x-1,y-2));
                
                
            }
            if(check(x+2,y+1,n)&&vis[x+2][y+1]==-1)
            {
                dis[x+2][y+1]=cnt;
                vis[x+2][y+1]=1;
                if((x+2)==e1&&(y+1)==e2)
                return;
                another.push_back(make_pair(x+2,y+1));
                
                
            }
            if(check(x+2,y-1,n)&&vis[x+2][y-1]==-1)
            {
                dis[x+2][y-1]=cnt;
                vis[x+2][y-1]=1;
                if((x+2)==e1&&(y-1)==e2)
                return;
                another.push_back(make_pair(x+2,y-1));
                
                
            }
            if(check(x+1,y+2,n)&&vis[x+1][y+2]==-1)
            {
                dis[x+1][y+2]=cnt;
                vis[x+1][y+2]=1;
                if((x+1)==e1&&(y+2)==e2)
                return;
                another.push_back(make_pair(x+1,y+2));
                
            }
            if(check(x+1,y-2,n)&&vis[x+1][y-2]==-1)
            {
                dis[x+1][y-2]=cnt;
                vis[x+1][y-2]=1;
                if((x+1)==e1&&(y-2)==e2)
                return;
                another.push_back(make_pair(x+1,y-2));
                
                
            }
    
    }
    dfs(vis,dis,n,cnt+1,another,e1,e2);
//return 0;
    
    
    
    
}


class Solution {
public:
	int minStepToReachTarget(vector<int>&knight, vector<int>&target, int N){
	    // Code here
	    
	    vector<vector<int>>vis(N+1,vector<int>(N+1,-1));
        vector<vector<int>>dis(N+1,vector<int>(N+1,0));
        if(knight==target)
        return 0;
        vector<pair<int,int>>ans;
        vis[knight[0]][knight[1]]=1;
        dis[knight[0]][knight[1]]=0;
        ans.push_back(make_pair(knight[0],knight[1]));
        dfs(vis,dis,N,1,ans,target[0],target[1]);
	    return dis[target[0]][target[1]];
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	}
};


// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
