/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIDocumentPickerContainerItem;

@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell  {
    bool_enabled;
    _UIDocumentPickerContainerItem *_item;
}

@property(retain) _UIDocumentPickerContainerItem * item;
@property bool enabled;


- (bool)enabled;
- (void)setEnabled:(bool)arg1;
- (void)dealloc;
- (id)item;
- (void)setItem:(id)arg1;
- (void)updateThumbnail;
- (void)updateContents;
- (void)reloadItem:(bool)arg1;
- (id)viewControllerForDisplay;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;

@end