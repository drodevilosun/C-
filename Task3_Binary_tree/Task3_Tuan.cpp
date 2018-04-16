//From Tuan-san:
/*******************************************************************************
 * Copyright(C) 2015 - 2016 FA-team.                   *
 * All Rights Reserved.                                                        *
 *                                                                             *
 * FA-team CONFIDENTIAL AND PROPRIETARY                            *
 * This program must be used solely for the purpose for which it was           *
 * furnished by FA-team Corporation. No part of this program       *
 * may be reproduced or disclosed to others, in any form, without the prior    *
 * written permission of FA-team.                      *
 *                                                                             *
 ******************************************************************************/

/*
 * Task 3: implement binary tree
 */

#include <stdio.h>
#include <stdlib.h>

#include "task3.h"
#include "app_structs.h"
#include "definitions.h"

int Task_3::init() {
	return APP_OK;
}

int Task_3::insert(Node_Tree *node, int v) {
	printf("Inserting value: %d\n", v);

	if (mRoot == 0) {
		printf("New root: %d\n", v);
		mRoot = new Node_Tree();
		mRoot->right = 0;
		mRoot->left = 0;
		mRoot->v = v;
		mRoot->parent = 0;
		return APP_OK;
	}

	if (v > node->v) {
		if (0 == node->right) {
			printf("New node right: %d\n", v);
			node->right = new Node_Tree();
			node->right->v = v;
			node->right->left = 0;
			node->right->right = 0;
			node->right->parent = node;

			return APP_OK;
		} else {
			return insert(node->right, v);
		}
	} else {
		if (0 == node->left) {
			printf("New node left: %d\n", v);
			node->left = new Node_Tree();
			node->left->v = v;
			node->left->left = 0;
			node->left->right = 0;
			node->left->parent = node;
			return APP_OK;
		} else {
			return insert(node->left, v);
		}
	}

	return APP_OK;
}

Node_Tree *nodemax(Node_Tree *node) {
	if (node->right == 0)
		return node;
	else
		return nodemax(node->right);
}

Node_Tree *nodemin(Node_Tree *node) {
	if (node->left == 0)
		return node;
	else
		return nodemin(node->left);
}

Node_Tree *findNode(Node_Tree *node, int v) {
	if (node == 0) {
		return 0;
	}
	if (node->v == v) {
		return node;
	} else if (0 == findNode(node->left, v)) {
		return 0;
	} else if (0 == findNode(node->right, v)) {
		return 0;
	}

	return 0;
}

int Task_3::remove(int v) {
	Node_Tree *node = findNode(mRoot, v);

	if (node == 0) {
		return APP_ERROR;
	} else if (node == mRoot && (mRoot->left == 0 && mRoot->right == 0)) {
		delete mRoot;
		mRoot = 0;
	} else if(node->left ==0){
		node->parent = node->right;
		delete node;
	}else if(node->right ==0){
		node->parent = node->left;
		delete node;
	}

	// node has 2 child
	Node_Tree *min = nodemin(node->right);

	printf("node: %d \n", node->v);
	printf("nodemin: %d \n", min->v);

	node->v = min->v;

	delete min;
	min = 0;

	return APP_OK;
}

int Task_3::sort() {

}

int Task_3::print(Node_Tree *node, int direction) {
	if (node == 0) {
		return APP_OK;
	}

	if (direction == 0) {
		printf("root: %d\n", node->v);
	} else if (direction < 0) {
		printf("left: %d\n", node->v);
	} else if (direction > 0) {
		printf("right: %d\n", node->v);
	}

	print(node->left, -1);
	print(node->right, 1);
}

Task_3::Task_3() {
	// TODO Auto-generated constructor stub
	printf("\nTask 3 initialized \n");

	for (int i = 0; i < 10; i++) {
		insert(mRoot, rand() % 100);
	}

	print(mRoot);

	printf("Tree after deleted value %d \n", mRoot->v);
	remove(mRoot->v);
	print(mRoot);

}

Task_3::~Task_3() {
	// TODO Auto-generated destructor stub
}
