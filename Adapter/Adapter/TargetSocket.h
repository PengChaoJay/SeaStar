#pragma once
class TargetSocket
{
public:
	virtual ~TargetSocket();
	virtual void request() const;
};

