//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UILayoutGuide;

@interface _TtC4Argo18BasicToolTipButton : UIButton
{
    // Error parsing type: , name: shadowRadius
    // Error parsing type: , name: bubbleBackgroundColor
    // Error parsing type: , name: tipLeadingConstraint
    // Error parsing type: , name: tipWidthConstraint
    // Error parsing type: , name: tipTopConstraint
    // Error parsing type: , name: tipHeightConstraint
    // Error parsing type: , name: $__lazy_storage_$_bubbleLeadingConstraint
    // Error parsing type: , name: $__lazy_storage_$_bubbleBottomConstraint
    // Error parsing type: , name: $__lazy_storage_$_bubbleTopConstraint
    // Error parsing type: , name: $__lazy_storage_$_bubbleTrailingConstraint
    // Error parsing type: , name: tipLeadingWallConstraint
    // Error parsing type: , name: tipTrailingWallConstraint
    // Error parsing type: , name: tipTopWallConstraint
    // Error parsing type: , name: tipBottomWallConstraint
    // Error parsing type: , name: textSize
    // Error parsing type: , name: restrictTextWidth
    // Error parsing type: , name: tipLayoutGuide
    // Error parsing type: , name: bubbleLayoutGuide
    // Error parsing type: , name: direction
    // Error parsing type: , name: useiOSRounding
    // Error parsing type: , name: triangleHeight
    // Error parsing type: , name: padding
    // Error parsing type: , name: cornerRadius
    // Error parsing type: , name: isShowingDebugFrames
    // Error parsing type: , name: trianglePoint
    // Error parsing type: , name: shadowOffset
    // Error parsing type: , name: _insetsWithShadow
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect accessibilityFrame;
- (void)updateConstraints;
- (void)layoutSubviews;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)didMoveToSuperview;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic, retain) UIColor *backgroundColor;
@property(nonatomic) struct CGPoint trianglePoint; // @synthesize trianglePoint;
@property(nonatomic) _Bool isShowingDebugFrames; // @synthesize isShowingDebugFrames;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius;
@property(nonatomic) double padding; // @synthesize padding;
@property(nonatomic) double triangleHeight; // @synthesize triangleHeight;
@property(nonatomic) _Bool useiOSRounding; // @synthesize useiOSRounding;
@property(nonatomic, readonly) UILayoutGuide *tipLayoutGuide; // @synthesize tipLayoutGuide;

@end

