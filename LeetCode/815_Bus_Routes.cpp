#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000007 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

void printGraph(const unordered_map<int, unordered_set<int>>& graph) {
    for (const auto& entry : graph) {
        cout << "Node " << entry.first << ": ";
        for (int neighbor : entry.second) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}

int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {

        if(source == target) return 0;

        unordered_set<int> visited;
        queue<int> q;

        // Build a graph represented by an adjacency list
        unordered_map<int, unordered_set<int>> graph;
        for (int i = 0; i < routes.size(); ++i) {
            for (int j = 0; j < routes[i].size(); ++j) {
                graph[routes[i][j]].insert(i);
            }
        }
        printGraph(graph);
        q.push(source);
        // visited.insert(source);
        int steps = 0;

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; ++i) {
                int current = q.front();
                q.pop();

                for (int routeIndex : graph[current]) {
                    if(visited.count(routeIndex)==0){
                        visited.insert(routeIndex);
                        for (int neighbor : routes[routeIndex]) {
                                if(neighbor==target)return steps+1;
                                q.push(neighbor);
                        }
                    }
                }
            }

            steps++;
        }

        // If target is not reachable from the source
        return -1;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
    vector<vector<int>> routes = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
        // Add more routes as needed
    };

    int source = 1;
    int target = 20;

    int result = numBusesToDestination(routes, source, target);

    if (result != -1) {
        cout << "Minimum connected components from " << source << " to " << target << ": " << result << endl;
    } else {
        cout << "No path from " << source << " to " << target << " found." << endl;
    }
    
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}