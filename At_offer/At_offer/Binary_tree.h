#ifndef BINARY_TREE
#define BINARY_TREE
#include<iostream>
template <typename T>
class binary_tree
{
public:
	binary_tree * left_tree;
	binary_tree *right_tree;
	T value;


};
binary_tree(T v) :value(v), left_tree(NULL), right_tree(NULL)
{

}
#endif