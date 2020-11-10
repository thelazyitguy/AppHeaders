//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "YTPageStyling-Protocol.h"

@class NSString, UIImageView, YTFormattedStringLabel, YTIFormattedString, YTSeparatorView;

@interface YTWatchCardListHeaderView : UIControl <YTPageStyling>
{
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_subtitleLabel;
    UIImageView *_disclosureArrow;
    YTSeparatorView *_bottomSeparator;
    _Bool _expandable;
    _Bool _expanded;
    int _bottomSeparatorType;
    int _heightType;
    YTIFormattedString *_title;
    YTIFormattedString *_subtitle;
}

+ (double)preferredHeightForHeightType:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) int heightType; // @synthesize heightType=_heightType;
@property(nonatomic) int bottomSeparatorType; // @synthesize bottomSeparatorType=_bottomSeparatorType;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isExpandable) _Bool expandable; // @synthesize expandable=_expandable;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) YTIFormattedString *title; // @synthesize title=_title;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

