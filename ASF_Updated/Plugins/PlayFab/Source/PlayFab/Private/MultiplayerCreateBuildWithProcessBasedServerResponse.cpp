#include "MultiplayerCreateBuildWithProcessBasedServerResponse.h"

FMultiplayerCreateBuildWithProcessBasedServerResponse::FMultiplayerCreateBuildWithProcessBasedServerResponse() {
    this->AreAssetsReadonly = false;
    this->ContainerFlavor = EContainerFlavor::pfenum_ManagedWindowsServerCore;
    this->InstrumentationConfiguration = NULL;
    this->IsOSPreview = false;
    this->MetaData = NULL;
    this->MonitoringApplicationConfiguration = NULL;
    this->MultiplayerServerCountPerVm = 0;
    this->UseStreamingForAssetDownloads = false;
    this->VmSize = EAzureVmSize::pfenum_Standard_A1;
}

