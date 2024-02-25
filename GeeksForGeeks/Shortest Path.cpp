class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        vector<vector<int>> adj[N];
        for(auto e : edges)
            adj[e[0]].push_back( {e[1], e[2]} );

        vector<int> distance(N, INT_MAX);
        distance[0] = 0;
        queue<int> q;
        q.push(0);
        
        while(q.size()){
            int node = q.front();   q.pop(); 

            for(auto padosi : adj[node]){
                int nbr = padosi[0] ;
                int dist = padosi[1];
                if(distance[node] + dist < distance[nbr]){
                    distance[nbr] = distance[node] + dist ;
                    q.push(nbr);
                }
            }
        }
        for(auto &a : distance)
            if(a==INT_MAX)a = -1;
        return distance ;
    }
};
