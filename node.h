/*****************************************************************************/
/* node.h															 *********/
/* Header for describing struct node and related functions			 *********/
/* Created by Jaak Kõusaar (jck@hot.ee)								 *********/
/* 21.02.2014														 *********/
/*****************************************************************************/



/* STRUCTURES ****************************************************************/

/* Structure node represents typical BDD node and holds all the values needed
   for grpah analysis based on 5-element algebra (Ubar/Kõusaar 2011) and 
   variable/error information for Boolean differential calculus			     */
typedef struct NODE_TYPE
{
	struct NODE_TYPE* right;
	struct NODE_TYPE* down;
	char name[ 20 ];
	unsigned varnum;
	unsigned absnum;
	unsigned flags;
} NODE;

/*-------------------------------------------------------------------------*/