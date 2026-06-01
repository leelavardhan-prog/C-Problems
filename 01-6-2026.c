/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void serializeHelper(struct TreeNode* root, char* result) {
    char temp[32];

    if (!root) {
        strcat(result, "#,");
        return;
    }

    sprintf(temp, "%d,", root->val);
    strcat(result, temp);

    serializeHelper(root->left, result);
    serializeHelper(root->right, result);
}

char* serialize(struct TreeNode* root) {
    char* result = (char*)calloc(100000, sizeof(char));
    serializeHelper(root, result);
    return result;
}

struct TreeNode* deserializeHelper(char** data) {
    if (**data == '#') {
        (*data) += 2; // skip "#,"
        return NULL;
    }

    int val = strtol(*data, data, 10);
    (*data) += 1; // skip ','

    struct TreeNode* node =
        (struct TreeNode*)malloc(sizeof(struct TreeNode));

    node->val = val;
    node->left = deserializeHelper(data);
    node->right = deserializeHelper(data);

    return node;
}

struct TreeNode* deserialize(char* data) {
    return deserializeHelper(&data);
}