//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBaseContentView.h>

@class GKSListItemView;

@interface GKSListItemContentView : GOOBaseContentView
{
    GKSListItemView *_mainContent;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) GKSListItemView *mainContent; // @synthesize mainContent=_mainContent;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect)arg1;

@end

