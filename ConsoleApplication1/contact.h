#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Contact {
public:
    virtual ~Contact() {}
    virtual void show() const = 0;
    virtual string getType() const = 0;
};