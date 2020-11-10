//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyling-Protocol.h>

@class NSString, QTMActivityIndicator;

@interface YTShareBusyView : UIView <YTPageStyling>
{
    QTMActivityIndicator *_activityIndicator;
    _Bool _shown;
}

- (void).cxx_destruct;
- (void)animateWithShown:(_Bool)arg1 duration:(double)arg2 alpha:(double)arg3;
- (void)layoutAnimatedPropertiesWithAlpha:(double)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)setShown:(_Bool)arg1 animated:(_Bool)arg2 opaque:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

