#include "MultiplayerGetBuildResponse.h"

FMultiplayerGetBuildResponse::FMultiplayerGetBuildResponse() {
    this->AreAssetsReadonly = false;
    this->ContainerFlavor = EContainerFlavor::pfenum_ManagedWindowsServerCore;
    this->CustomGameContainerImage = NULL;
    this->InstrumentationConfiguration = NULL;
    this->MetaData = NULL;
    this->MultiplayerServerCountPerVm = 0;
    this->VmSize = EAzureVmSize::pfenum_Standard_A1;
}

