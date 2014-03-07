/*****************************************************************************/
/* graph.h															 *********/
/* Header for describing struct graph and related functions			 *********/
/* Created by Jaak Kõusaar (jck@hot.ee)								 *********/
/* 23.02.2014														 *********/
/*****************************************************************************/

#include "node.h"


/* STRUCTURES ****************************************************************/

/* Structure graph represents BDD - a set of connected nodes, end node/value
   and element information that current graph represents.		             */
typedef struct GRAPH_TYPE
{
	NODE** nods;
	char element[ 20 ];
	unsigned graphnum;
	unsigned begin;
	unsigned length;
} GRAPH;

/*-------------------------------------------------------------------------*/