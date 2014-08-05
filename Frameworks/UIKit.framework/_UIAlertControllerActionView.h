/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSString, UIAlertAction, UIImageView, UIAlertControllerVisualStyle, NSMutableArray, NSLayoutConstraint, UILabel, UIGestureRecognizer;

@interface _UIAlertControllerActionView : UIView <UIGestureRecognizerDelegate, _UIAlertActionRepresenting> {
    NSLayoutConstraint *_minimumHeightConstraint;
    UIView *labelContainerView;
    UILabel *label;
    UILabel *descriptiveLabel;
    UIImageView *imageView;
    UIImageView *checkView;
    UIView *highlightedBackgroundContainerView;
    NSMutableArray *highlightedBackgroundConstraints;
    unsigned long long _roundedCorners;
    NSMutableArray *havingDescriptiveLabelConstraints;
    NSMutableArray *notHavingDescriptiveLabelConstraints;
    NSLayoutConstraint *_descriptiveLabelWidthConstraint;
    UIAlertAction *_action;
    UIAlertControllerVisualStyle *_visualStyle;
    id selectedTarget;
    SEL selectedAction;
    id highlightTarget;
    SEL highlightAction;
    bool_hasDescriptiveText;
    UIGestureRecognizer *_selectGestureRecognizer;
    bool_discrete;
}

@property(copy) UIAlertAction * action;
@property UIAlertControllerVisualStyle * visualStyle;
@property double alignedDescriptiveLabelTextWidth;
@property(readonly) double currentDescriptiveLabelTextWidth;
@property bool discrete;
@property(getter=isHighlighted) bool highlighted;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)action;
- (void)setAction:(id)arg1;
- (void)_updateFontSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)setDiscrete:(bool)arg1;
- (void)setHighlightTarget:(id)arg1 action:(SEL)arg2;
- (void)setSelectedTarget:(id)arg1 action:(SEL)arg2;
- (double)currentDescriptiveLabelTextWidth;
- (double)alignedDescriptiveLabelTextWidth;
- (void)setAlignedDescriptiveLabelTextWidth:(double)arg1;
- (void)_updateMinimumHeight;
- (void)_recomputeBackgroundColor;
- (void)_updateTextAlignmentForDescriptiveText:(bool)arg1;
- (void)_prepareConstraintsForDescriptiveText:(bool)arg1;
- (double)_minimumLabelScaleFactor;
- (id)_titleFont;
- (bool)discrete;
- (void)_recomputeTextColor;
- (void)_triggerSelect;
- (id)_touchForEvent:(id)arg1;
- (void)_prepareConstraints;
- (void)_contentSizeChanged;
- (void)_action:(id)arg1 changedToChecked:(bool)arg2;
- (void)_action:(id)arg1 changedToEnabled:(bool)arg2;
- (id)visualStyle;
- (void)setVisualStyle:(id)arg1;
- (void)_selectGestureChanged:(id)arg1;
- (void)_installSelectGestureRecognizer;
- (void)_uninstallSelectGestureRecognizer;
- (void)_updateBackgroundView;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)_updateStyle;
- (bool)_isFocusableElement;
- (void)tintColorDidChange;
- (void)_focusStateDidChange;
- (id)tintColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end