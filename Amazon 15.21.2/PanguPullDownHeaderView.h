//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PanguPullDownBaseView.h"

@interface PanguPullDownHeaderView : PanguPullDownBaseView
{
    _Bool _hasLayoutedForManuallyRefreshing;
    _Bool _isEnablePullDown;
}

- (void)isEnablePullDown:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)autoRefreshWhenViewDidAppear;
- (double)yOfCenterPoint;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

@end
