//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface _TtC27ConstellationElementsCoreUI16AttributedButton : UIButton
{
    // Error parsing type: , name: buttonWasTappedBlock
    // Error parsing type: , name: primaryActionLoggingBlock
    // Error parsing type: , name: tapTargetMinimumHeight
    // Error parsing type: , name: highlightDuration
    // Error parsing type: , name: unhighlightDuration
    // Error parsing type: , name: tapTargetPadding
    // Error parsing type: , name: attributedTitleLabel
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didTap;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
@property(nonatomic, readonly) struct UIEdgeInsets alignmentRectInsets;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
- (id)initWithCoder:(id)arg1;

@end
