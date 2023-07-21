#ifndef __FIELD_H__
#include <iostream>
#include <vector>
#define __FIELD_H__
 
struct Field {
private:
    int field_size = 0;
	std::vector<int> fieldV;
	int MaxCage = 0;
    int FindMaxCage(int a, int b);
    int gorizontal(int x);
    int vertical(int x);
    int diagonal();
public:
	void init();
    void print();
    void Move(char n);
    int check();
};
#endif