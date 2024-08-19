#include "MultiplayerCreateBuildWithProcessBasedServerRequest.h"

FMultiplayerCreateBuildWithProcessBasedServerRequest::FMultiplayerCreateBuildWithProcessBasedServerRequest() {
    this->AreAssetsReadonly = false;
    this->CustomTags = NULL;
    this->InstrumentationConfiguration = NULL;
    this->IsOSPreview = false;
    this->MetaData = NULL;
    this->MonitoringApplicationConfiguration = NULL;
    this->MultiplayerServerCountPerVm = 0;
    this->UseStreamingForAssetDownloads = false;
    this->VmSize = EAzureVmSize::pfenum_Standard_A1;
}

