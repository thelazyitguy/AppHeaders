//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4Hulu19ContextMenuItemView.h"

@class NSString, UILabel, UIStackView, _TtC4Hulu26TruncatingTextAndBadgeView;

@interface _TtC4Hulu26ContextMenuDescriptionView : _TtC4Hulu19ContextMenuItemView
{
    // Error parsing type: , name: labelStackView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: footnoteView
    // Error parsing type: , name: tertiaryLabel
    // Error parsing type: , name: descriptionDefaultNumberOfLines
    // Error parsing type: , name: badges
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
- (void)awakeFromNib;
@property(nonatomic, retain) UILabel *tertiaryLabel; // @synthesize tertiaryLabel;
@property(nonatomic, retain) _TtC4Hulu26TruncatingTextAndBadgeView *footnoteView; // @synthesize footnoteView;
@property(nonatomic, retain) UILabel *descriptionLabel; // @synthesize descriptionLabel;
@property(nonatomic, retain) UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) UIStackView *labelStackView; // @synthesize labelStackView;

@end

