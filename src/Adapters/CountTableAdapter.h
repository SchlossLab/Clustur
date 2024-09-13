//
// Created by gregj on 8/27/2024.
//

#ifndef COUNTTABLEADAPTER_H
#define COUNTTABLEADAPTER_H
#include <Rcpp.h>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class CountTableAdapter {
public:
    CountTableAdapter() = default;
    bool CreateDataFrameMap(const Rcpp::DataFrame& countTable);
    std::vector<std::string> GetSamples() const {return sampleNames;}
    // Going to ensure that each count_table atleast has a group
    // And if there is no count table inputted, I will create a base one.
    double FindAbundanceBasedOnGroup(const std::string& group, const std::string& sampleName) const;
    double FindTotalAbundance(const std::string& sampleName) const;
    std::string GetNameByIndex(int) const;
    std::vector<double> GetColumnByName (const std::string& name) const;
    std::vector<std::string> GetGroups() const;
private:
    std::vector<std::string> sampleNames;
    std::unordered_map<std::string, std::vector<double>> dataFrameMap;
    std::vector<std::string> groups;
};



#endif //COUNTTABLEADAPTER_H
