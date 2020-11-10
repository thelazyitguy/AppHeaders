//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSString, YTIMenuTitleRenderer, YTLabel, YTQTMButton, YTSeparatorView;

@interface YTMenuTitleView : UIView <YTPageStyling>
{
    YTIMenuTitleRenderer *_renderer;
    YTSeparatorView *_bottomSeparator;
    YTQTMButton *_actionButton;
    YTLabel *_titleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) YTLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) YTQTMButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)updateButton;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

