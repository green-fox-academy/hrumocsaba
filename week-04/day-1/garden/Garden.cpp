
#include "Garden.h"


void Garden::addTree(Tree * tree) {
    trees.push_back(*tree);

}
void Garden::addFlower(Flower * flower) {
    flowers.push_back(*flower);

}
void Garden::info() {

    for (int i = 0; i < trees.size() ; ++i) {
        if (trees[i]._waterlevel<trees[i]._whenNeedWater){
            cout<<"The "<<trees[i]._color<<" "<<trees[i]._type<<" needs water."<<endl;
        } else{
            cout<<"The "<<trees[i]._color<<" "<<trees[i]._type<<" doesn't needs water."<<endl;
        }

    }
    for (int i = 0; i < flowers.size() ; ++i) {
        if (flowers[i]._waterlevel<flowers[i]._whenNeedWater){
            cout<<"The "<<flowers[i]._color<<" "<<flowers[i]._type<<" needs water."<<endl;
        } else{
            cout<<"The "<<flowers[i]._color<<" "<<flowers[i]._type<<" doesn't needs water."<<endl;
        }

    }

}
void Garden::watering() {
    float amount;
    cin>>amount;
    cout<<"Watering with "<<amount<<endl;
    _waterintamount=amount/(flowers.size()+trees.size());
    for (int i = 0; i < trees.size(); ++i) {
        trees[i]._waterlevel+=(_waterintamount*trees[i]._multiplier);
        cout<<trees[i]._waterlevel<<endl;
    }
    for (int i = 0; i < flowers.size(); ++i) {
        flowers[i]._waterlevel+=(_waterintamount*flowers[i]._multiplier);
        cout<<flowers[i]._waterlevel<<endl;
    }

}

