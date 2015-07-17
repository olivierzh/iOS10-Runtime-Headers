/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUITranscriptItem : NSObject {
    AceObject * _aceObject;
    NSUUID * _itemIdentifier;
    UIViewController<SiriUIViewController> * _viewController;
}

@property (nonatomic, retain) AceObject *aceObject;
@property (nonatomic, copy) NSUUID *itemIdentifier;
@property (nonatomic, retain) UIViewController<SiriUIViewController> *viewController;

+ (id)transcriptItemWithAceObject:(id)arg1;

- (void).cxx_destruct;
- (id)aceObject;
- (id)description;
- (id)initWithAceObject:(id)arg1;
- (id)itemIdentifier;
- (void)setAceObject:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end