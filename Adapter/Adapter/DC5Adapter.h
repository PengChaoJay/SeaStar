#pragma once
#include <iostream>
#include "AC.h"

//ת���Ľӿ�
class DC5Adapter
{
public:
	virtual ~DC5Adapter();
	virtual bool support(AC ac) = 0;
	virtual int outputDC5V(AC ac) = 0;
};

class ChinaPowerAdapter : public DC5Adapter {
public:
	bool support(AC ac) {
		return (voltage == ac.outputAC());
	}
	int outputDC5V(AC ac) {
		int adpterInput = ac.outputAC();
		std::string result = "ʹ��ChinaPowerApter��ѹ������������AC/V:" + adpterInput;
		std::cout << result << std::endl;

		return adpterInput;
	}

private:
	int voltage = 220;
};

