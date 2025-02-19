#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Edge structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;
};

// Graph structure to hold edges
struct Graph {
    int V, E; // Number of vertices and edges
    vector<Edge> edges; // Vector of edges
};

// Function to find the parent of a node using path compression
int find(int parent[], int i) {
    if (parent[i] == -1) {
        return i;
    }
    return find(parent, parent[i]);
}

// Function to perform union of two subsets
void unionSets(int parent[], int x, int y) {
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}

// Comparator function to sort edges based on their weight
bool compareEdges(Edge e1, Edge e2) {
    return e1.weight < e2.weight;
}

// Function to implement Kruskal's algorithm
void kruskalMST(Graph& graph) {
    // Step 1: Sort all the edges in non-decreasing order of their weight
    sort(graph.edges.begin(), graph.edges.end(), compareEdges);

    // Allocate memory for creating V subsets
    int* parent = new int[graph.V];
    for (int i = 0; i < graph.V; i++) {
        parent[i] = -1; // Initialize all nodes as separate sets
    }

    vector<Edge> mst; // Vector to store the resulting MST

    // Step 2: Iterate through sorted edges and add to MST if no cycle is formed
    for (const auto& edge : graph.edges) {
        int x = find(parent, edge.src);
        int y = find(parent, edge.dest);

        // If including this edge does not cause a cycle
        if (x != y) {
            mst.push_back(edge);
            unionSets(parent, x, y); // Union the sets
        }
    }

    // Print the resulting MST
    cout << "Edges in the Minimum Spanning Tree:\n";
    for (const auto& edge : mst) {
        cout << edge.src << " -- " << edge.dest << " == " << edge.weight << endl;
    }

    // Clean up
    delete[] parent;
}

int main() {
    // Create a graph
    Graph graph;
    graph.V = 4; // Number of vertices
    graph.E = 5; // Number of edges
    graph.edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    kruskalMST(graph); // Call Kruskal's algorithm
    return 0;
}
