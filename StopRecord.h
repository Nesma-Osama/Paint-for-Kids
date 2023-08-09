#pragma once
#include"Actions/Action.h"
class StopRecord : public Action
{
public:

	StopRecord(ApplicationManager* pApp);
	//Reads parameters required for action to execute (code depends on action type)
	virtual void ReadActionParameters();
	//Execute action (code depends on action type)
	virtual void Execute();
	virtual void UndoFig(CFigure* F);
	virtual void RedoFig(CFigure* F1);
};