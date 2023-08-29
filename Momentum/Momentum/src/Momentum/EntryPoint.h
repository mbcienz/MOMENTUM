

#ifdef MM_PLATFORM_WINDOWS

extern Momentum::Application* Momentum::CreateApplication(); 

int main(int argc, char** argv)
{
	auto app = Momentum::CreateApplication(); 
	app->Run();
	delete app;
}

#endif