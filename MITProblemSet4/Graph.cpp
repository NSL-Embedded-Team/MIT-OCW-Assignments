#include <iostream>
#include <map>
#include <stdexcept>
#include <vector>

class Graph {
    std::map<int, std::vector<int>> graphData;
public:
    Graph(const std::vector<int>& startNodes, const std::vector<int>& endNodes);
    int nodeDegree(const int nodeID) const;
    const std::vector<int>& adjacencyList(const int nodeID) const;
};

Graph::Graph(const std::vector<int>& startNodes, const std::vector<int>& endNodes)
{
    if(startNodes.size() != endNodes.size())
        throw std::invalid_argument("Start and End list size doesn't match");
    for(size_t i = 0; i < startNodes.size(); ++i) {
        graphData[startNodes[i]].push_back(endNodes[i]);
        graphData[endNodes[i]];
    }
}

const std::vector<int>& Graph::adjacencyList(const int nodeID) const
{
    auto iterator = graphData.find(nodeID);
    if(iterator == graphData.end())
        throw std::runtime_error("Invalid Node ID");
    return iterator->second;
}

int Graph::nodeDegree(const int nodeID) const
{
    return adjacencyList(nodeID).size();
}

int main()
{
    std::vector<int> startList {1, 1, 1, 5, 5, 4};
    std::vector<int> endList {2, 3, 4, 4, 2, 2};

    Graph g(startList, endList);

    std::cout<< g.nodeDegree(1) <<std::endl;

    std::vector<int>adjcentListof1 {g.adjacencyList(1)};

    for(auto node: adjcentListof1){
        std::cout<< node << ' ';
    }

    std::cout<<std::endl;

    return 0;
}
