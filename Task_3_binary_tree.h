/*******************************************************************************
 * Copyright(C) 2015 - 2016 FA-team.                   *
 * All Rights Reserved.                                                        *
 *                                                                             *
 * FA-team CONFIDENTIAL AND PROPRIETARY                            *
 * This program must be used solely for the purpose for which it was           *
 * furnished by FA-team Corporation. No part of this program       *
 * may be reproduced or disclosed to others, in any form, without the prior    *
 * written permission of FA-team.
 *
 ******************************************************************************/
#ifndef TASK3_H
#define TASK3_H
#include "app_structs.h"

class Task_3 {
public:
	Task_3();
	virtual ~Task_3();

	Node_Tree *mRoot =0;

	int init() ;
	int insert(Node_Tree *node, int v);
	int remove(int v);
	int sort();
	int print(Node_Tree *node, int direction = 0);

};

#endif /* TASK3_H */
