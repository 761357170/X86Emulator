#ifndef EXECOPERANDS_H
#define EXECOPERANDS_H
#include "cpu/executer/operand/execreadwriteoperand.h"
#include <assert.h>
class ExecOperands
{
public:
	ExecOperands()
	{
		_dest=NULL;
		_src=NULL;
		_src2=NULL;
	}
	virtual ~ExecOperands()
	{
		if(_dest)	delete _dest;
		if(_src)	delete _src;
		if(_src2)	delete _src2;
	}
public:
	ExecReadWriteOperand* getDest()
	{
		return _dest;
	}
	ExecReadOperand* getSrc()
	{
		return _src;
	}
	ExecReadOperand* getSrc2()
	{
		return _src2;
	}
	void setDest(ExecReadWriteOperand* dest)
	{
		assert(dest);
		_dest=dest;
	}
	void setSrc(ExecReadOperand* src)
	{
		assert(src);
		_src=src;
	}
	void setSrc2(ExecReadOperand* src2)
	{
		assert(src2);
		_src2=src2;
	}
protected:
	ExecReadWriteOperand* _dest;
	ExecReadOperand* _src;
	ExecReadOperand* _src2;
};

#endif // EXECOPERANDS_H
