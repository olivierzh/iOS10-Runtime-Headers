/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class <GKNATObserverDelegate>;

@interface GKNATObserver : NSObject  {
}

@property <GKNATObserverDelegate> * delegate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)shouldTryNATCheck;
- (int)currentNATType;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithOptions:(id)arg1;

@end