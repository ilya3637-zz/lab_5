#include <iostream>
#include <vector>


using namespace std;

class Node {
    int serialNum;
    vector<int> roads;
public:
    Node(int serial);
    int getWayTo(int serial);
    void addRoad(int rad);
};

Node::Node(int serial) {
    serialNum = serial;
}

void Node::addRoad(int rad){
    roads.push_back(rad);
}

int Node::getWayTo(int serial){
    int i = 0;
    for(std::vector<int>::iterator it = roads.begin(); it != roads.end(); ++it){
        if(i == serial){
            return (*it);
        }
        ++i;
    }
}

int main()
{
    vector<Node> nodeList;
    vector<int>  shortestWays;
    int n = 0;
    int serial = 0;
    cin>>n;
    for(int i = 0; i < n; i ++){
            ++serial;
            nodeList.push_back(*(new Node(serial)));
        for(int j = 0; j < n; j ++){
            int m = 0;
            cin>>m;
            nodeList[i].addRoad(m);
        }
    }
    for(int i = 0; i < nodeList.size(); i ++){
        for(int j = 0; j < n; j ++){
            if(nodeList[i].getWayTo(j) != 0) {

            }
        }
    }

    return 0;
}
