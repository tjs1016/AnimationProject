#pragma once
#ifndef _H_APPLICATION
#define _H_APPLICATION

class Application
{
private:
	Application(const Application&);
	Application& operator=(const Application&);

public:
	inline Application() {}
	inline virtual ~Application() {}
	inline virtual void Initialize() {}
	inline virtual void Update(float intDeltaTime) {}
	inline virtual void Render(float inAspectratio) {}
	inline virtual void Shutdown() {}

};

#endif // 
