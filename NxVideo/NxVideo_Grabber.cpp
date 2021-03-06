/*
-----------------------------------------------------------------------------
This file is part of NxGraphics, Multimedia Engine.
Copyright (c) 2011 Stephane Kyles, http://www.subnetworks.org
				_   __      _    __ _      __           
			   / | / /_  __| |  / /(_)____/ /___   ____ 
			  /  |/ /| |/_/| | / // // __  // _ \ / __ \
			 / /|  /_>  <  | |/ // // /_/ //  __// /_/ /
			/_/ |_//_/|_|  |___//_/ \__,_/ \___/ \____/ 

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
#include "NxVideoPreCompiled.h"

namespace NxVideo_Namespace {

NxVideo_Grabber::NxVideo_Grabber() : mNewFrame(false)
{

}

NxVideo_Grabber::~NxVideo_Grabber()
{
	
}
 
NxVideoCaptureDeviceType NxVideo_Grabber::GetCaptureDeviceType()
{
	return mType ;
}

unsigned int NxVideo_Grabber::GetWidth()
{
	return mVideoWidth ;
}

unsigned int NxVideo_Grabber::GetHeight()
{
	return mVideoHeight ;
}

unsigned int NxVideo_Grabber::GetBpp() 
{
	return mVideoBpp ;
}

} // namespace
