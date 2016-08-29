/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupAboutViewController : UIViewController <UIScrollViewDelegate> {
    PKPaymentSetupAboutView * _aboutView;
    NSString * _bodyText;
    void * _navigationController;
    bool  _navigationControllerHidesShadow;
    bool  _requiresPrivacy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_setupNavigationItemWithTitle:(id)arg1 isPresented:(bool)arg2;
- (void)_showPrivacyView:(id)arg1;
- (void)dealloc;
- (id)initForPrivacyPresented:(bool)arg1;
- (id)initWithAboutText:(id)arg1 isPresented:(bool)arg2;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;

@end