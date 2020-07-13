#include "Includes/GameLogin/QuickLoginHelper.h"
#include "Includes/GameLogin/PlatformVersionConfig.h"
#include "Includes/GameLogin/DolphinCDN.h"
#include "Includes/GameLogin/PufferCDN.h"
#include "Includes/GameLogin/xLuaPatch.h"
#include "Includes/GameLogin/SharedVersionConfig.h"
#include "Includes/GameLogin/VersionCustomRedirect.h"
#include "Includes/GameLogin/GrayUserCredential.h"
#include "Includes/GameLogin/GrayUserAdditionalInfo.h"
#include "Includes/GameLogin/AutoRepairPopController.h"
#include "Includes/GameLogin/Game18PolicyController.h"
#include "Includes/GameLogin/GameLoginTipsController.h"
#include "Includes/GameLogin/LoginCommonProgressController.h"
#include "Includes/GameLogin/LoginNavigationController.h"
#include "Includes/GameLogin/NickNameEditController.h"
#include "Includes/GameLogin/PrivacyController.h"
#include "Includes/GameLogin/QualitySettingDisplayController.h"
#include "Includes/GameLogin/ServerSettingController.h"
#include "Includes/GameLogin/SwitchLoginController.h"
#include "Includes/GameLogin/UILoginGMController.h"
#include "Includes/GameLogin/UILoginMainController.h"
#include "Includes/GameLogin/UIVersionCodeController.h"
#include "Includes/GameLogin/VersionAnnouncementController.h"
#include "Includes/GameLogin/VersionInfoController.h"
#include "Includes/GameLogin/VersionUpdateInfoController.h"
#include "Includes/GameLogin/LoginGryoCamera.h"
#include "Includes/GameLogin/LoginSceneLoader.h"
#include "Includes/GameLogin/LoginServerListManager.h"
#include "Includes/GameLogin/LoginUIScene.h"
#include "Includes/GameLogin/Game18PolicyData.h"
#include "Includes/GameLogin/Game18PolicyDataUtil.h"
#include "Includes/GameLogin/IIPSUpdateActionMsg.h"
#include "Includes/GameLogin/IIPSUpdateCustomData.h"
#include "Includes/GameLogin/LoginPlayerInfo.h"
#include "Includes/GameLogin/VersionConfigDataStore.h"
#include "Includes/GameLogin/AutoRepairPopView.h"
#include "Includes/GameLogin/Game18PolicyView.h"
#include "Includes/GameLogin/GameLoginTipsView.h"
#include "Includes/GameLogin/GuestLoginTipsView.h"
#include "Includes/GameLogin/LoginCommonProgressView.h"
#include "Includes/GameLogin/LoginNavigationView.h"
#include "Includes/GameLogin/LoginResDownView.h"
#include "Includes/GameLogin/NickNameEditView.h"
#include "Includes/GameLogin/PrivacyView.h"
#include "Includes/GameLogin/QualitySettingDisplayView.h"
#include "Includes/GameLogin/ServerSettingView.h"
#include "Includes/GameLogin/SwitchLoginView.h"
#include "Includes/GameLogin/UILoginGMView.h"
#include "Includes/GameLogin/UILoginMainView.h"
#include "Includes/GameLogin/UIVersionCodeView.h"
#include "Includes/GameLogin/VersionAnnouncementView.h"
#include "Includes/GameLogin/VersionInfoView.h"
#include "Includes/GameLogin/VersionUpdateInfoProgressDotView.h"
#include "Includes/GameLogin/VersionUpdateInfoTextureCellView.h"
#include "Includes/GameLogin/EVersionUpdateInfoStyle.h"
#include "Includes/GameLogin/VersionUpdateInfoView.h"
#include "Includes/GameLogin/DownloadDetail.h"
#include "Includes/GameLogin/DownloadList.h"
#include "Includes/GameLogin/DownloadAPKDetail.h"
#include "Includes/GameLogin/DownloadAPKInfo.h"
#include "Includes/GameLogin/VersionUpdateView.h"
#include "Includes/GameLogin/LoginDefine.h"
#include "Includes/GameLogin/LoginGame.h"
#include "Includes/GameLogin/LoginUtility.h"
#include "Includes/GameLogin/DelAccCancelController.h"
#include "Includes/GameLogin/DelAccCancelSuccessPopController.h"
#include "Includes/GameLogin/DelAccLoginPopController.h"
#include "Includes/GameLogin/DelAccCancelSuccessPopView.h"
#include "Includes/GameLogin/DelAccCancelView.h"
#include "Includes/GameLogin/DelAccLoginPopView.h"