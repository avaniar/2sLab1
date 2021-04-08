#pragma once
template<typename key, typename data>
class Iterator
{
public:
	virtual key next() = 0;
	virtual bool has_next() = 0;
};