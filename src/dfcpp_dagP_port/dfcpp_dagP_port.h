#ifndef DFCPP_PORT_H
#define DFCPP_PORT_H
#include <vector>
class DfcppPartitionResult {
public:
    std::vector<int> nodes; // index from 0
    std::vector<int> inDfvs; // index from 0
    std::vector<int> outDfvs; // index from 0
};
std::vector<DfcppPartitionResult*> dfcpp_graph_partition_by_dagP(char* graphFileName, int nParts);
void free_dfcpp_partition_result(std::vector<DfcppPartitionResult*>& result);
#endif
