//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GKSAccessibilityElement, GKSAttributedLabel, GKSListItemDescriptor, NSArray, NSString;

@interface GKSListItemView : UIView
{
    GKSAttributedLabel *_titleLabel;
    GKSAttributedLabel *_subtitleLabel;
    UIView *_textArea;
    NSArray *_accessibleElements;
    GKSAccessibilityElement *_labelAccessibilityElement;
    unsigned long long _labelAccessibilityTraits;
    NSString *_labelAccessibilityHint;
    NSString *_labelAccessibilityValue;
    GKSListItemDescriptor *_descriptor;
    UIView *_leftAccessoryView;
    UIView *_rightAccessoryView;
}

+ (double)textAreaWidthConstraintWithDescriptor:(id)arg1 constrainedToWidth:(double)arg2;
+ (double)labelHeightWithLabelDescriptor:(id)arg1 constrainedToWidth:(double)arg2;
+ (_Bool)requiresConstraintBasedLayout;
+ (double)heightForDescriptor:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightAccessoryView; // @synthesize rightAccessoryView=_rightAccessoryView;
@property(retain, nonatomic) UIView *leftAccessoryView; // @synthesize leftAccessoryView=_leftAccessoryView;
@property(retain, nonatomic) GKSListItemDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)linkAccessibilityElementsFromLabel:(id)arg1;
- (id)singleLinkAccessibilityLabel;
- (void)updateLabelAccessibilityDescriptors;
- (id)copyToSelfContainerFromAccessibilityElement:(id)arg1;
- (id)accessibilityElementProxyForView:(id)arg1;
- (id)accessibleElements;
- (id)labelAccessibilityElement;
- (void)setAccessoryView:(id)arg1 overView:(id *)arg2;
- (id)verticalAlignmentConstraintForAccessoryDescriptor:(id)arg1 view:(id)arg2;
- (void)updateTextAreaConstraints;
- (void)updateConstraints;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)invalidateAccessibleElements;
- (void)setNeedsLayoutWithLabelDescriptor:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)setAccessibilityValue:(id)arg1;
- (id)accessibilityValue;
- (void)setAccessibilityHint:(id)arg1;
- (id)accessibilityHint;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)init;

@end

