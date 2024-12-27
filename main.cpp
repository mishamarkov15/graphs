#include <iostream>
#include "include/Algorithms.h"
#include "include/ArcGraph.h"
#include "include/ListGraph.h"
#include "include/MatrixGraph.h"

void graphTester(const IGraph& graph, const std::string& title) {
    std::cout << "************ Testing " << title << " ************\n";
    std::cout << "************ Graph ************\n";
    graph.Display();
    std::cout << "\nBFS: ";

    mainBFS(graph, [](int vertex) -> void { std::cout << vertex << ' ';});
    std::cout << "\nDFS: ";

    mainDFS(graph, [](int vertex) -> void { std::cout << vertex << ' ';});
    std::cout << "\nTopological Sort: ";

    for (const auto& vertex : topologicalSort(graph)) {
        std::cout << vertex << ' ';
    }

    std::cout << "\n************ Done " << title << " ************\n\n";
}

int main() {
    int vertexes, arcs;
    std::cin >> vertexes >> arcs;
    ListGraph listGraph(vertexes);
    for (int i = 0; i < arcs; ++i) {
        int from, to;
        std::cin >> from >> to;
        listGraph.AddEdge(from, to);
    }

    MatrixGraph matrixGraph(listGraph);
    ArcGraph arcGraph(matrixGraph);

    graphTester(listGraph, "ListGraph");
    graphTester(matrixGraph, "MatrixGraph");
    graphTester(arcGraph, "ArcGraph");

    return 0;
}
