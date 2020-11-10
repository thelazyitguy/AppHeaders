//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"
#import "YTResponder-Protocol.h"

@class NSString, YTFormattedStringLabel, YTIFormattedString, YTIWatchCardActionLinkSupportedRenderers, YTQTMButton, YTSeparatorView, YTWatchCardActionLinkView;
@protocol YTResponder;

@interface YTWatchCardHeaderView : UIView <YTPageStyling, YTResponder>
{
    YTFormattedStringLabel *_titleView;
    YTFormattedStringLabel *_labelsView;
    YTWatchCardActionLinkView *_actionLinkView;
    YTQTMButton *_actionButton;
    YTSeparatorView *_bottomSeparator;
    int _bottomSeparatorType;
    id <YTResponder> _parentResponder;
    YTIFormattedString *_title;
    YTIFormattedString *_labels;
    YTIWatchCardActionLinkSupportedRenderers *_actionLink;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(nonatomic) int bottomSeparatorType; // @synthesize bottomSeparatorType=_bottomSeparatorType;
@property(retain, nonatomic) YTIWatchCardActionLinkSupportedRenderers *actionLink; // @synthesize actionLink=_actionLink;
@property(retain, nonatomic) YTIFormattedString *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) YTIFormattedString *title; // @synthesize title=_title;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)removeMenuTarget;
- (void)setMenuTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

