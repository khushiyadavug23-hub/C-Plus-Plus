/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    unordered_map <Node*, Node*> mp;
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        if(mp.find(node)!=mp.end()) return mp[node];
        Node* cloned = new Node(node->val);
        mp[node] = cloned;
        for(Node* child : node->neighbors){
            cloned->neighbors.push_back(cloneGraph(child));
        }
        return cloned;
    }
};
