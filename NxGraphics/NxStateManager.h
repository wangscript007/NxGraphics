/*
-----------------------------------------------------------------------------
This file is part of NxGraphics, Multimedia Engine.
Author : Stephane Kyles. Developed in Prague, Czech Republic.
		_   __       ______                     __     _            
	   / | / /_  __ / ____/_____ ____ _ ____   / /_   (_)_____ _____
	  /  |/ /| |/_// / __ / ___// __ `// __ \ / __ \ / // ___// ___/
	 / /|  /_>  < / /_/ // /   / /_/ // /_/ // / / // // /__ (__  ) 
	/_/ |_//_/|_| \____//_/    \__,_// .___//_/ /_//_/ \___//____/  
									/_/                             
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
-----------------------------------------------------------------------------
*/
#ifndef __NXSTATEMANAGER_H__
#define __NXSTATEMANAGER_H__

#include "NxPrerequisites.h"

namespace Nx {

class NxGraphics_Export NxState
{
public :
	virtual void Init()=0;
	virtual void Cleanup()=0;

	//Pushing and popping states causes pausing/resuming.
	virtual void Pause()=0;
	virtual void Resume()=0;

	virtual void GetEvents()=0;
	virtual void Update( float Seconds )=0;
	virtual void Display()=0;
};


class NxGraphics_Export NxStateIntro : public NxState {
public :
	void Init();
	void Cleanup();
	void Pause();
	void Resume();
	void GetEvents();
	void Update( float Seconds );
	void Display();
};

class NxGraphics_Export NxStateManager
{
public :
	NxStateManager();
	~NxStateManager();
	void ChangeState( NxState * state );
	void PushState( NxState * state );
	void RemoveState( NxState* state );
	void PopState();
	void Clear();
	void Update( float Seconds );
private:
	std::vector<NxState*> mStates;

};

}

#endif