#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSData+SFAdditions.h"
#import "NSData+SFSDKUtils.h"
#import "NSDictionary+SFAdditions.h"
#import "NSString+SFAdditions.h"
#import "NSURL+SFAdditions.h"
#import "NSURL+SFStringUtils.h"
#import "NSURLResponse+SFAdditions.h"
#import "SFApplicationHelper.h"
#import "SFAuthErrorHandlerList.h"
#import "SFDefaultUserManagementDetailViewController.h"
#import "SFDefaultUserManagementListViewController.h"
#import "SFDefaultUserManagementViewController.h"
#import "SFDirectoryManager.h"
#import "SFFormatUtils.h"
#import "SFIdentityCoordinator.h"
#import "SFIdentityData.h"
#import "SFInstrumentation.h"
#import "SFLoginViewController.h"
#import "SFManagedPreferences.h"
#import "SFMethodInterceptor.h"
#import "SFNetwork.h"
#import "SFOAuthCoordinator.h"
#import "SFOAuthCredentials.h"
#import "SFOAuthInfo.h"
#import "SFOAuthOrgAuthConfiguration.h"
#import "SFOAuthSessionRefresher.h"
#import "SFPreferences.h"
#import "SFPushNotificationManager.h"
#import "SFRestAPI+Blocks.h"
#import "SFRestAPI+Files.h"
#import "SFRestAPI+Notifications.h"
#import "SFRestAPI+QueryBuilder.h"
#import "SFRestAPI.h"
#import "SFRestRequest.h"
#import "SFSDKAILTNPublisher.h"
#import "SFSDKAlertMessage.h"
#import "SFSDKAlertMessageBuilder.h"
#import "SFSDKAnalyticsPublisher.h"
#import "SFSDKAppConfig.h"
#import "SFSDKAppDelegate.h"
#import "SFSDKAppFeatureMarkers.h"
#import "SFSDKAsyncProcessListener.h"
#import "SFSDKAuthConfigUtil.h"
#import "SFSDKAuthHelper.h"
#import "SFSDKBatchRequest.h"
#import "SFSDKBatchResponse.h"
#import "SFSDKCollectionResponse.h"
#import "SFSDKCompositeRequest.h"
#import "SFSDKCompositeResponse.h"
#import "SFSDKCoreLogger.h"
#import "SFSDKCryptoUtils.h"
#import "SFSDKDevInfoViewController.h"
#import "SFSDKEventBuilderHelper.h"
#import "SFSDKInstrumentationHelper.h"
#import "SFSDKLoginFlowSelectionView.h"
#import "SFSDKLoginHost.h"
#import "SFSDKLoginHostDelegate.h"
#import "SFSDKLoginHostListViewController.h"
#import "SFSDKLoginHostStorage.h"
#import "SFSDKLoginViewControllerConfig.h"
#import "SFSDKNavigationController.h"
#import "SFSDKOAuth2.h"
#import "SFSDKOAuthConstants.h"
#import "SFSDKPrimingRecordsResponse.h"
#import "SFSDKPushNotificationDecryption.h"
#import "SFSDKPushNotificationError.h"
#import "SFSDKPushNotificationFieldsConstants.h"
#import "SFSDKResourceUtils.h"
#import "SFSDKSalesforceAnalyticsManager.h"
#import "SFSDKSoqlBuilder.h"
#import "SFSDKSoslBuilder.h"
#import "SFSDKSoslReturningBuilder.h"
#import "SFSDKTestCredentialsData.h"
#import "SFSDKTestRequestListener.h"
#import "SFSDKUITableViewCell.h"
#import "SFSDKUserSelectionNavViewController.h"
#import "SFSDKUserSelectionTableViewController.h"
#import "SFSDKUserSelectionView.h"
#import "SFSDKViewController.h"
#import "SFSDKViewControllerConfig.h"
#import "SFSDKWebUtils.h"
#import "SFSDKWebViewStateManager.h"
#import "SFSDKWindowContainer.h"
#import "SFSDKWindowManager.h"
#import "SFSObjectTree.h"
#import "SFUserAccount.h"
#import "SFUserAccountConstants.h"
#import "SFUserAccountIdentity.h"
#import "SFUserAccountManager.h"
#import "SalesforceSDKConstants.h"
#import "SalesforceSDKCore.h"
#import "SalesforceSDKCoreDefines.h"
#import "SalesforceSDKManager.h"
#import "TestSetupUtils.h"
#import "UIColor+SFColors.h"
#import "UIDevice+SFHardware.h"
#import "UIScreen+SFAdditions.h"

FOUNDATION_EXPORT double SalesforceSDKCoreVersionNumber;
FOUNDATION_EXPORT const unsigned char SalesforceSDKCoreVersionString[];
