//
// Created by Gregory Johnson on 6/17/24.
//

#ifndef WEIGHTEDLINKAGE_H
#define WEIGHTEDLINKAGE_H
#include "Cluster.h"


class WeightedLinkage : public Cluster {
public:
    WeightedLinkage(RAbundVector*, ListVector*, SparseDistanceMatrix*, float, std::string, float);
    bool updateDistance(PDistCell& colCell, PDistCell& rowCell);
    std::string getTag();

private:
    int saveRow;
    int saveCol;
};

#endif //WEIGHTEDLINKAGE_H