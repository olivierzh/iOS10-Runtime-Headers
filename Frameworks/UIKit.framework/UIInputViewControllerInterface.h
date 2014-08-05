/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIIVCInterface>, NSString, _UIInputViewControllerState, <_UIIVCResponseDelegate>;

@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface> {
    <_UIIVCResponseDelegate> *_responseDelegate;
    <_UIIVCInterface> *_forwardingInterface;
    _UIInputViewControllerState *_cachedState;
}

@property(retain) <_UIIVCInterface> * forwardingInterface;
@property(getter=_cachedState,setter=_setCachedState:,retain) _UIInputViewControllerState * cachedState;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(retain) <_UIIVCResponseDelegate> * responseDelegate;


- (id)init;
- (void)dealloc;
- (void)setForwardingInterface:(id)arg1;
- (void)_tearDownRemoteService;
- (void)_setCachedState:(id)arg1;
- (void)_handleInputViewControllerState:(id)arg1;
- (id)forwardingInterface;
- (id)_cachedState;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(id)arg2;
- (void)setResponseDelegate:(id)arg1;
- (id)responseDelegate;

@end