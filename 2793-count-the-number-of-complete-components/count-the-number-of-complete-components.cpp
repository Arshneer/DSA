class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        for(auto &e: edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        vector<bool> visited(n,false);
        int result=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                queue<int>q;
                q.push(i);
                visited[i]=true;
                vector<int>component;
                int edgecount=0;

                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    component.push_back(node);
                    edgecount+=graph[node].size();

                    for(int nei:graph[node]){
                        if(!visited[nei]){
                            visited[nei]=true;
                            q.push(nei);
                        }
                    }
                }
                int V=component.size();
                int E=edgecount/2;
                if(E==V*(V-1)/2)
                result++;
            }
        }
        return result;
    }
};