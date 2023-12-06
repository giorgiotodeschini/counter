#pragma once

#ifdef COUNTER_EXPORTS
#define DLLIMPEXP __declspec(dllexport)
#else
#define DLLIMPEXP __declspec(dllimport)
#endif

class DLLIMPEXP Counter
{
protected:
	double m_value;

public:
	Counter(double initialValue);

	double Add(double value);
	double Sub(double value);

	double GetValue();
	void SetValue(double value);
};

