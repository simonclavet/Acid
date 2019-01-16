#include "MainRenderer.hpp"

#include <Fonts/RendererFonts.hpp>
#include <Guis/RendererGuis.hpp>
#include <Renderer/Renderer.hpp>
#include <Scenes/Scenes.hpp>
//#include "Fonts2/RendererFonts2.hpp"

namespace test
{
	MainRenderer::MainRenderer()
	{
		std::vector<Attachment> renderpassImages0 = {
			Attachment(0, "depth", Attachment::Type::Depth),
			Attachment(1, "swapchain", Attachment::Type::Swapchain)
		};
		std::vector<SubpassType> renderpassSubpasses0 = {
			SubpassType(0, {0, 1})
		};
		m_renderpassCreates.emplace_back(RenderpassCreate(renderpassImages0, renderpassSubpasses0));
	}

	void MainRenderer::Start()
	{
		auto &rendererContainer = GetRendererContainer();
		rendererContainer.Add<RendererGuis>(GraphicsStage(0, 0));
		rendererContainer.Add<RendererFonts>(GraphicsStage(0, 0));
	//	rendererContainer.Add<RendererFonts2>(GraphicsStage(0, 0));
	}

	void MainRenderer::Update()
	{
	//	auto rendererFonts2 = Renderer::Get()->GetRendererRegister().Get<RendererFonts2>();
	//	rendererFonts2->Update();

	//	auto &renderpassCreate0 = Renderer::Get()->GetRenderStage(0)->GetRenderpassCreate();
	//	renderpassCreate0.SetScale(0.8f);
	}
}