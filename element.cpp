#include "element.h"

Element::Element(const std::string& name)
{
    this->name = name;
}

Element::~Element()
{
}

void Element::execute()
{
    TRACK("element: --%s", this->name.c_str());
}

