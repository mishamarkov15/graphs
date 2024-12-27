#include <iostream>
#include "include/Algorithms.h"
#include "include/ListGraph.h"
#include "include/MatrixGraph.h"

void graphTester(const IGraph& graph, const std::string& title) {
    std::cout << "************ Testing " << title << " ************\n";
    std::cout << "\n************ Graph ************\n";
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
    int vertexes;
    std::cin >> vertexes;
    ListGraph listGraph(vertexes);
    for (int i = 0; i < vertexes; ++i) {
        int from, to;
        std::cin >> from >> to;
        listGraph.AddEdge(from, to);
    }

    MatrixGraph matrixGraph(listGraph);

    graphTester(listGraph, "ListGraph");
    graphTester(matrixGraph, "MatrixGraph");

    return 0;
}
