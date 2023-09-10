class Solution
{
    public:
        Node* insert(Node* node, int data) {
        
            // Your code goes here
            if(!node){
                Node* newNode = new Node(data);
                return newNode;
            }
            
            
            if(node->data > data){
                node->left = insert(node->left, data);
            }
            else if(node->data < data){
                node->right = insert(node->right, data);
            }
            return node;
    }

};
