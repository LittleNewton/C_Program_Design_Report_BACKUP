#include<stdio.h>
#include<stdlib.h>

typedef struct tree_node
{
    struct tree_node *parent;
    struct tree_node *left;
    struct tree_node *right;
    char *element;
    int judge;
}Tree_Node;

int end = 0;

Tree_Node *PreRootPrint(Tree_Node *root)
{
    if(root->judge == 1)
    {
        printf("%s\n",root->element);
        root->judge = NULL;
        end += 1;
        if(end == 7)
        {
            return 0;
        }
    }

    if((root->left == NULL) 
            ||
       (root->right->judge==NULL && root->left->judge==NULL))
    {
        if(root->parent->right->judge == 1)
        {
            return PreRootPrint(root->parent->right);
        }
        else
        {
            return PreRootPrint(root->parent);
        }
    }
    else
    {
        return PreRootPrint(root->left);
    }
}

int main()
{
    Tree_Node a[7];
    a[0].parent = NULL;
    a[0].left = &a[1];
    a[0].right = &a[2];
    a[0].element = "1";
    a[0].judge = 1;

    a[1].parent = &a[0];
    a[1].left = &a[3];
    a[1].right = &a[4];
    a[1].element = "  1.1";
    a[1].judge = 1;

    a[2].parent = &a[0];
    a[2].left = &a[5];
    a[2].right = &a[6];
    a[2].element = "  1.2";
    a[2].judge = 1;

    a[3].parent = &a[1];
    a[3].left = a[3].right = NULL;
    a[3].element = "    1.1.1";
    a[3].judge = 1;

    a[4].parent = &a[1];
    a[4].left = a[4].right = NULL;
    a[4].element = "    1.1.2";
    a[4].judge = 1;

    a[5].parent = &a[2];
    a[5].left = a[5].right = NULL;
    a[5].element = "    1.2.1";
    a[5].judge = 1;

    a[6].parent = &a[2];
    a[6].left = a[5].right = NULL;
    a[6].element = "    1.2.2";
    a[6].judge = 1;

    PreRootPrint(a);
}