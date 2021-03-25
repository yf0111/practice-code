/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> a;
    vector<int> preorder(Node* root) {
        traversal(root,a);
        return a;
    }
    void traversal (Node *p,vector<int> &a){
        if(p){
            a.push_back(p->val);
            for(int w=0;w<p->children.size();w++){
                traversal(p->children[w],a);
            }
        }
    }
};