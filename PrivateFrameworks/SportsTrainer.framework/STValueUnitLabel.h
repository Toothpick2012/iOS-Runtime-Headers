/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class UILabel;

@interface STValueUnitLabel : UIView {
    unsigned int _reversesLabels : 1;
    unsigned int _forceLayout : 1;
    unsigned int _verticalArrangement : 1;
    float _labelSpacing;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    int _textAlignment;
}

@property float labelSpacing;
@property(readonly) UILabel * leftLabel;
@property BOOL reversesLabels;
@property(readonly) UILabel * rightLabel;
@property int textAlignment;
@property BOOL verticalArrangement;

- (BOOL)_labelsNeedSizing;
- (void)_sizeLabelsToFit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)labelSpacing;
- (void)layoutSubviews;
- (id)leftLabel;
- (BOOL)reversesLabels;
- (id)rightLabel;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabelSpacing:(float)arg1;
- (void)setNeedsDisplay;
- (void)setReversesLabels:(BOOL)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setVerticalArrangement:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (int)textAlignment;
- (BOOL)verticalArrangement;

@end
