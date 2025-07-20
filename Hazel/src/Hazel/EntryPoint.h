#pragma once
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc,char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Successfully Initialized log --ProIg-Chaa");
	HZ_INFO("Hi, this is Hazel!");
	HZ_ERROR("This is a error!");

	auto app =  Hazel::CreateApplication();
	app->Run();
	delete app;
}



#endif 
