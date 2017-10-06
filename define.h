#ifndef DEFINE_H
#define DEFINE_H

struct _Node {
	union {
		int n;
		char c;
	}
	void *ptr;
	int var;
};
typedef struct _Node Node;

/*Function Prototypes*/
Node *my_reverse(Node *head);

#endif
