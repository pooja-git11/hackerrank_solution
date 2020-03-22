#include <iostream>
#include <cstddef>
	
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  
    void preOrder(Node *root) {

          if( root == NULL )
              return;

          std::cout << root->data << " ";

          preOrder(root->left);
          preOrder(root->right);
      }

/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/



    Node * insert(Node * root, int data) {

        Node *temp = new Node(data);
        Node *temp2,*prev;
        if(root == NULL)
            root = temp;

        else
        {
            temp2 = root;
            while(temp2 != NULL)
            {
                prev = temp2;
                if(temp2->data > temp->data)
                    temp2 = temp2->left;
                else
                    temp2 = temp2->right;
            } 
            if(prev->data > temp->data)
                prev->left = temp;
            else
                prev->right = temp;  
        }


        return root;
    }

}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
	myTree.preOrder(root);
    return 0;
}
