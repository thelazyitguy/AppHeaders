//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDKSuggestedQueryCV.h"

@class GDKAvatarView, GDKSuggestedPersonQueryCVO, NSArray, UILabel;

@interface GDKSuggestedPersonQueryCV : GDKSuggestedQueryCV
{
    UILabel *_label;
    UILabel *_sublabel;
    GDKAvatarView *_avatarView;
    NSArray *_sublabelConstraints;
    NSArray *_noSublabelConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *noSublabelConstraints; // @synthesize noSublabelConstraints=_noSublabelConstraints;
@property(readonly, nonatomic) NSArray *sublabelConstraints; // @synthesize sublabelConstraints=_sublabelConstraints;
@property(readonly, nonatomic) GDKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) UILabel *sublabel; // @synthesize sublabel=_sublabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)updateTextFieldLines;
- (void)traitCollectionDidChange:(id)arg1;
- (void)makeAdditionalConstraints;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) GDKSuggestedPersonQueryCVO *object; // @dynamic object;

@end
