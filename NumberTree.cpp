//
// Created by luisa on 24/10/2022.
//

#include "NodeNumber.cpp"

void NumberTree::addNumberTree(NodeNumber *& tree, int date)
{
    NodeNumber *aux= new NodeNumber();

    aux->dato= date;
    aux->right= NULL;
    aux->left= NULL;

    if(tree == NULL)
    {
        tree= aux;
    }
    else
    {
        if (date > tree->dato) {

            if (tree->right == NULL) {
                tree->right = aux;
            } else {
                addNumberTree(tree->right, date);
            }
        } else {
            if (tree->left == NULL) {
                tree->left = aux;
            } else {
                addNumberTree(tree->left, date);
            }
        }
    }
}

void NumberTree:: showNumberTree(NodeNumber *tree) {
    if (tree == NULL)
        return;
    else {
        showNumberTree(tree->left);
        cout << tree->dato << endl;
        showNumberTree(tree->right);
    }
}