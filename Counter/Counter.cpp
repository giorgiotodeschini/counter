#include "pch.h"
#include "Counter.h"

Counter::Counter(double initialValue = 0.0) 
{
	m_value = initialValue;
}

double Counter::Add(double value = 1.0)
{
	m_value += value;
	return m_value;
}

double Counter::Sub(double value = 1.0)
{
	m_value -= value;
	return m_value;
}

double Counter::Value()
{
	return m_value;
}