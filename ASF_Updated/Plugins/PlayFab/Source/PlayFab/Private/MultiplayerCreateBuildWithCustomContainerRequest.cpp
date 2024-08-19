#include "MultiplayerCreateBuildWithCustomContainerRequest.h"

FMultiplayerCreateBuildWithCustomContainerRequest::FMultiplayerCreateBuildWithCustomContainerRequest() {
    this->AreAssetsReadonly = false;
    this->ContainerFlavor = EContainerFlavor::pfenum_ManagedWindowsServerCore;
    this->ContainerImageReference = NULL;
    this->CustomTags = NULL;
    this->LinuxInstrumentationConfiguration = NULL;
    this->MetaData = NULL;
    this->MonitoringApplicationConfiguration = NULL;
    this->MultiplayerServerCountPerVm = 0;
    this->UseStreamingForAssetDownloads = false;
    this->VmSize = EAzureVmSize::pfenum_Standard_A1;
}

