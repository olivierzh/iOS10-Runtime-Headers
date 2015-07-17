/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayAllDayView : UIView {
    UILabel * _allDay;
    BOOL  _allDayLabelHighlighted;
    BOOL  _allowSelection;
    <EKDayAllDayViewDelegate> * _delegate;
    EKEvent * _dimmedOccurrence;
    UIView * _dividerLineViewBottom;
    UIView * _dividerLineViewTop;
    float  _fixedHeight;
    int  _maxVisibleRows;
    float  _occurrenceInset;
    NSMutableArray * _occurrenceViews;
    int  _orientation;
    UIScrollView * _scroller;
    EKEvent * _selectedEvent;
    BOOL  _showSelection;
    BOOL  _showsBorderLines;
    BOOL  _showsLabel;
    BOOL  _usesSmallText;
}

@property (nonatomic) BOOL allowsOccurrenceSelection;
@property (nonatomic) <EKDayAllDayViewDelegate> *delegate;
@property (nonatomic, retain) EKEvent *dimmedOccurrence;
@property (nonatomic) float fixedHeight;
@property (nonatomic) int maxVisibleRows;
@property (nonatomic, readonly) float naturalHeight;
@property (nonatomic) BOOL showsBorderLines;
@property (nonatomic) BOOL showsLabel;
@property (nonatomic) BOOL showsSelection;

+ (id)allDayLabelBoldFont;
+ (id)allDayLabelFont;
+ (id)unscaledAllDayFont;

- (void).cxx_destruct;
- (float)_allDayAreaHeightForEventCount:(int)arg1;
- (float)_borderLineWidth;
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;
- (float)_height;
- (void)addViewToScroller:(id)arg1;
- (BOOL)allowsOccurrenceSelection;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (BOOL)containsEvent:(id)arg1;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)delegate;
- (void)didMoveToWindow;
- (id)dimmedOccurrence;
- (float)firstEventYOffset;
- (float)fixedHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAllDayLabelHighlighted;
- (void)layoutSubviews;
- (int)maxVisibleRows;
- (float)naturalHeight;
- (float)nextAvailableOccurrenceViewYOrigin;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViews;
- (void)removeAllOccurrenceViews;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)setAllDayLabelColor:(id)arg1;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setFixedHeight:(float)arg1;
- (void)setMaxVisibleRows:(int)arg1;
- (void)setOccurrenceInset:(float)arg1 labelInset:(float)arg2;
- (void)setOccurrences:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setShowsBorderLines:(BOOL)arg1;
- (void)setShowsLabel:(BOOL)arg1;
- (void)setShowsSelection:(BOOL)arg1;
- (BOOL)showsBorderLines;
- (BOOL)showsLabel;
- (BOOL)showsSelection;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateLabelFont;

@end