/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSystemAppProxy : BSBaseXPCClient  {
    bool_uiApplicationClient;
}

@property(getter=isUIApplicationClient,setter=setUIApplicationClient:) bool uiApplicationClient;

+ (id)sharedInstance;

- (void)_sendMessageType:(long long)arg1 withMessage:(id)arg2 withReplyHandler:(id)arg3 waitForReply:(bool)arg4;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id)arg4;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(id)arg5;
- (id)clientCallbackQueue;
- (void)fireCompletion:(id)arg1 error:(id)arg2;
- (id)initWithEndpoint:(id)arg1;
- (void)queue_connectionWasCreated;
- (bool)isUIApplicationClient;
- (bool)isClientLoggingEnabled;
- (void)fireCompletion:(id)arg1 openAppErrorCode:(long long)arg2;
- (void)fireCompletion:(id)arg1 pidResult:(int)arg2 error:(id)arg3;
- (void)fireCompletion:(id)arg1 bundleIDResult:(id)arg2 error:(id)arg3;
- (void)setUIApplicationClient:(bool)arg1;
- (void)shutdownAndReboot:(bool)arg1;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(bool)arg3 withDescription:(id)arg4 withResult:(id)arg5;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(bool)arg3 withDescription:(id)arg4 withResult:(id)arg5;
- (void)sendActions:(id)arg1 withResult:(id)arg2;
- (void)canActivateApplication:(id)arg1 withResult:(id)arg2;
- (void)pidForApplication:(id)arg1 withResult:(id)arg2;
- (void)systemApplicationBundleIdentifierWithResult:(id)arg1;
- (void)applicationBundleID:(id)arg1 requestBrightness:(double)arg2 completion:(id)arg3;
- (void)setNextWakeInterval:(double)arg1 completion:(id)arg2;
- (void)badgeValueForBundleID:(id)arg1 completion:(id)arg2;
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;
- (void)checkInUIApplication;
- (id)init;
- (void)invalidate;

@end