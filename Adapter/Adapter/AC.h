#pragma once
class AC
{
public:
	virtual ~AC();
	virtual int outputAC() = 0;
};



class AC110 : public AC
{
public:
	int outputAC() override {
		return output;
	}
private:
	int output = 100;
};


class AC220 :public AC {
public:
	int outputAC() override {
		return output;
	}
private:
	int output = 220;
};
