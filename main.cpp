#include <iostream>
#include "include/Algorithms.h"
#include "include/ListGraph.h"


int main() {
    ListGraph graph(7);
    graph.AddEdge(0, 1);
    graph.AddEdge(0, 5);
    graph.AddEdge(1, 2);
    graph.AddEdge(1, 3);
    graph.AddEdge(1, 5);
    graph.AddEdge(1, 6);
    graph.AddEdge(3, 2);
    graph.AddEdge(3, 4);
    graph.AddEdge(3, 6);
    graph.AddEdge(5, 4);
    graph.AddEdge(5, 6);
    graph.AddEdge(6, 4);

    mainBFS(graph, [](int vertex) -> void { std::cout << vertex << ' ';});
    std::cout << '\n';

    mainDFS(graph, [](int vertex) -> void { std::cout << vertex << ' ';});
    std::cout << '\n';

    for (const auto& vertex : topologicalSort(graph)) {
        std::cout << vertex << ' ';
    }
    std::cout << '\n';

    return 0;
}
