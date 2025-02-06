#pragma once

#include "SampleBase.hpp"

namespace Diligent
{

class Tutorial02_Cube : public SampleBase
{
public:
    virtual void Initialize(const SampleInitInfo& InitInfo) override final;
    virtual void Render() override final;
    virtual void Update(double CurrTime, double ElapsedTime) override final;

private:
    void CreatePipelineState();
    void CreateVertexBuffer();
    void CreateIndexBuffer();

    RefCntAutoPtr<IPipelineState>         m_pPSO;
    RefCntAutoPtr<IBuffer>                m_CubeVertexBuffer;
    RefCntAutoPtr<IBuffer>                m_CubeIndexBuffer;
    RefCntAutoPtr<IBuffer>                m_VSConstants;
    RefCntAutoPtr<IShaderResourceBinding> m_pSRB;

    float4x4 m_WorldViewProjMatrix;
};

} // namespace Diligent