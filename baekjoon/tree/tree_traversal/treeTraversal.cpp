#include <iostream>
#include <vector>
using namespace std;
using std::vector;

//#define DEBUG

struct tree {
	char c;	// 해당 노드값
	tree* left = NULL;
	tree* right = NULL;
};

void makeNode(vector<tree>& node, int N) {
	char parent, left, right;
#ifdef DEBUG
    char input[7][3] = {
        {'A','B','C'},
        {'B','D','.'},
        {'C','E','F'},
        {'E','.','.'},
        {'F','.','G'},
        {'D','.','.'},
        {'G','.','.'},
    };
#endif
	for (int i = 0; i < N; i++) {
#ifndef DEBUG
		scanf("%c %c %c\n", &parent, &left, &right);
        rewind(stdin);
#else
        parent =    input[i][0];
        left =      input[i][1];
        right =     input[i][2];
        cout<<parent<<','<<left<<','<<right<<"\n";
#endif
		node[parent - 'A'].c = parent;
		if (left != '.') {
			node[parent - 'A'].left = &node[left - 'A'];
		}
		if (right != '.') {
			node[parent - 'A'].right = &node[right - 'A'];
		}
	}
}

void preorder(tree* root) {
	printf("%c", root->c);

	if (root->left != NULL) {
		preorder(root->left);
	}
	if (root->right != NULL) {
		preorder(root->right);
	}
}

void inorder(tree* root) {
	if (root->left != NULL) {
		inorder(root->left);
	}
	printf("%c", root->c);
	if (root->right != NULL) {
		inorder(root->right);
	}
}

void postorder(tree* root) {
	if (root->left != NULL) {
		postorder(root->left);
	}
	if (root->right != NULL) {
		postorder(root->right);
	}
	printf("%c", root->c);
}

int main()
{
	int N;
	tree* root;
    vector<tree> node(N);	// 'A' = node[0], 'B' = node[1] ...
#ifndef DEBUG
	scanf("%d\n", &N);
    rewind(stdin);
	makeNode(node, N);
#else
    N=7;
    makeNode(node, N);
#endif
	root = &node[0];

	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
}