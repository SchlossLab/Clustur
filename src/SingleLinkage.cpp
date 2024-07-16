//
// Created by Gregory Johnson on 6/17/24.
//

#include "MothurDependencies/SingleLinkage.h"

/***********************************************************************/

SingleLinkage::SingleLinkage(RAbundVector* rav, ListVector* lv, SparseDistanceMatrix* dm, float c, std::string s, float a) :
Cluster(rav, lv, dm, c, s, a)
{}


/***********************************************************************/
//This function returns the tag of the method.
std::string SingleLinkage::getTag() {
    return("nn");
}
/***********************************************************************/
//This function updates the distance based on the nearest neighbor method.
bool SingleLinkage::updateDistance(PDistCell& colCell, PDistCell& rowCell) {
    bool changed = false;
    if (colCell.dist > rowCell.dist) {
        colCell.dist = rowCell.dist;
    }
    return(changed);

}
/***********************************************************************/
