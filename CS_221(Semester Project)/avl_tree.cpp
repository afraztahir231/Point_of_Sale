#include <iostream>
using namespace std;

class node
{
	public:
		int data;
		node* left;
		node* right;
		
		node(int n)
		{
			this->data = n;
			this->left = NULL;
			this->right = NULL;
		}
};

class avl_tree
{
	public:
		node* root;
		
		avl_tree()
		{
			root = NULL;
		}
		
		int height(node* r)
		{
			int h = 0;
			
			if(r != NULL)
			{
				int l_height = height(r->left);
				int r_height = height(r->right);
				int MAX = max(l_height, r_height);
				h = MAX + 1;
			}
			
			return h;
		}
		
		int diff(node* r)
		{
			int l_height = height(r->left);
			int r_height = height(r->right);
			int b_factor = l_height - r_height;
			return b_factor;
		}
		
		node* rr_rotation(node* n)
		{
			node* temp = n->right;
			n->right = temp->left;
			temp->left = n;
			
			return temp;
		}
		
		node* ll_rotation(node* n)
		{
			node* temp = n->left;
			n->left = temp->right;
			temp->right = n;
			
			return temp;
		}
		
		node* rl_rotation(node* n)
		{
			node* temp = n->right;
			n->right = ll_rotation(temp);
			
			return rr_rotation(n);
		}
		
		node* lr_rotation(node* n)
		{
			node* temp = n->left;
			n->left = rr_rotation(temp);
			
			return ll_rotation(n);
		}
		
		node* balance (node* r)
		{
			int bal_factor = diff(r);
			
			if(bal_factor > 1)
			{
				if(diff(r->left) > 0)
				{
					r = ll_rotation(r);
				}
				else
				{
					r = lr_rotation(r);
				}
			}
			else if(bal_factor < -1)
			{
				if(diff(r->right) > 0)
				{
					r = rr_rotation(r);
				}
				else
				{
					r = rl_rotation(r);
				}
			}
			
				return r;
		}
		
		node* add_node(node* r, int n)
		{
			if(r == NULL)
			{
				
				node* new_node = new node(n);
				r = new_node;
				return r;
			}
			else
			{
				if(r->data > n)
				{
					r->left = add_node(r->right, n);
					r = balance(r);
				}
				else if (r->data < n)
				{
					r->right = add_node(r->left, n);
					r = balance(r);
				}
				
			}
		}
		
		void print_avl_tree(node* tree)
		{
			if(tree == NULL)
			{
				return;	
			}
			
			print_avl_tree(tree->left);
			cout << tree->data << "->";
			print_avl_tree(tree->right);
		}
};

int main()
{
	avl_tree t;
	
	t.root = t.add_node(t.root, 1);
	t.root = t.add_node(t.root, 2);
	t.root = t.add_node(t.root, 3);
	t.root = t.add_node(t.root, 4);
	t.root = t.add_node(t.root, 5);
	t.root = t.add_node(t.root, 6);
	t.root = t.add_node(t.root, 7);
	t.root = t.add_node(t.root, 8);
	
	
	t.print_avl_tree(t.root);
	
	return 0;
}
