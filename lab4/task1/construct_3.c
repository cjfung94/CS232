#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int value;
    struct node* next;
} node_t;

node_t * construct_3() {
    
	node_t* x;
	node_t* y;
	node_t* z;

	x = (node_t*)malloc(sizeof(node_t));
	y = (node_t*)malloc(sizeof(node_t));
	z = (node_t*)malloc(sizeof(node_t));

	
	y-> value = 2;
	y->next = z;

	z->value = 3;
	z->next = x;

	x->value = 1;
	x->next = y;

	return x;
	
	//Allocate three pointers: 
    //x for the first Node, and temporary pointers y and z for the other two Nodes.

    //Allocate three Node pointees and store references to them in the three pointers.

    //Dereference each pointer to store the appropriate number into the value field in its pointee.

    //Dereference each pointer to access the .next field in its pointee, 
    //and use pointer assignment to set the .next field to point to the appropriate Node. 

}

//You can ignore the following code for testing //
int dump_all(node_t*);
int main (int argc, char ** argv) {

    node_t * x = construct_3();
    return dump_all(x);

}

int dump_all(node_t * x) {
    printf("x -> %d\n", x->value);
    node_t * y = x->next;
    printf("%d -> %d\n", x->value, y->value);
    node_t * z = y->next;
    printf("%d -> %d\n", y->value, z->value);
    if(z->next != x) {
    	printf("failed");
		free(x);
		free(y);
		free(z);
	return -1;
    } else {
		free(x);
		free(y);
		free(z);
        printf("%d -> %d\n", z->value, x->value);
        return 0;
    }
}