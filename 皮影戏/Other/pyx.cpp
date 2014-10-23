#include "pyx.h"

PYXAttempt::PYXAttempt()
	:Attempt()
{
	this->SetGameName(L"ƤӰϷ");
}

PYXAttempt::~PYXAttempt()
{}

int PYXAttempt::Initialize()
{
	group = shared_ptr<RenderGroup>(new RenderGroup);
	shared_ptr<RenderObject> object(new RenderObject);
	object->SetVertexData()
}

int PYXAttempt::Logic()
{}

void PYXAttempt::Render()
{}

int PYXAttempt::End()
{}
