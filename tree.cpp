#include "Tree.h"

adrNode newNode_1301213267(infotype X){
    adrNode P;
    P = new ElemenTree;
    P->info = X;
    P->RightChild = NULL;
    P->LeftChild = NULL;
    return P;
}

adrNode findNode_1301213267(adrNode root,infotype X){
    if(root->info == X || root == NULL){
       return root;
    }else{
        if(root->info > X){
            findNode_1301213267(root->LeftChild,X);
        }else if(root->info < X){
            findNode_1301213267(root->RightChild,X);
        }
    }
}

void insertNode_1301213267(adrNode &root, adrNode P){
    if (root == NULL){
        root = P;
    }else if ( P->info < root->info){
        insertNode_1301213267(root ->LeftChild,P);
    }else{
        insertNode_1301213267(root ->RightChild,P);
    }
}

void printPreOrder_1301213267(adrNode root){
    if(root != NULL){
        cout << root->info << " ";
        printPreOrder_1301213267(root->LeftChild);
        printPreOrder_1301213267(root->RightChild);
    }
}

void printDescendant_1301213267(adrNode root, infotype X){
    if(root != NULL){
        if(root->info != X){
            cout << root->info << " ";
        }
        printDescendant_1301213267(root->LeftChild,X);
        printDescendant_1301213267(root->RightChild,X);
    }
}

int sumNode(adrNode root){
    if(root == NULL){
        return 0;
    }
    return root->info + sumNode(root->LeftChild) + sumNode(root ->RightChild);
}


int countLeaves_1301213267(adrNode root){
    if(root->LeftChild == NULL && root ->RightChild == NULL){
        return 1;
    }
    return countLeaves_1301213267(root->LeftChild) + countLeaves_1301213267(root ->RightChild);
}

int heightTree_1301213267(adrNode root){
    if(root != NULL){
        int kanan = heightTree_1301213267(root ->RightChild);
        int kiri = heightTree_1301213267(root ->LeftChild);
        if(kiri > kanan){
            return kiri+1;
        }else{
            return kanan+1;
        }
    }else{
        return -1;
    }
}
