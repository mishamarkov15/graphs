#ifndef IGRAPH_LISTGRAPH_H
#define IGRAPH_LISTGRAPH_H

#include "IGraph.h"
#include <deque>
#include <cassert>
#include <vector>

class ListGraph : public IGraph {
public:
    explicit ListGraph(int size);

    explicit ListGraph(const IGraph& graph);

    ~ListGraph() = default;

    void AddEdge(int from, int to) override;

    size_t VerticesCount() const override;

    std::vector<int> GetNextVertices(int vertex) const override;

    std::vector<int> GetPrevVertices(int vertex) const override;
private:
    std::vector<std::vector<int>> adjacencyLists;
};


#endif //IGRAPH_LISTGRAPH_H
