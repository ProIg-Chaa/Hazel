#include<Hazel.h>


class ExampleLayer : Hazel::Layer
{
public:
	ExampleLayer():Layer("Example")
	{}
	void OnUpdate()override
	{
		
		HZ_INFO("ExampleLayer::Update");
	}
	void OnEvent(Hazel::Event& event)override 
	{
		HZ_TRACE("{0}", event);
	}
};

class Sandbox : public Hazel::Application {
public:


	Sandbox(){}
	~Sandbox(){}
};
Hazel::Application* Hazel::CreateApplication(){
	return new Sandbox;
}
