//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer;

@protocol YTNGWatchMiniBarViewDelegate <NSObject>
- (_Bool)isAutonavEnabled;
- (_Bool)hasNextVideo;
- (_Bool)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;
- (void)didUpdateAspectRatio;
- (void)didPanMinibarWithState:(long long)arg1 delta:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)didTapNext;
- (void)didTapReplay;
- (void)didTapExpand;
- (void)didTapClose;
- (void)didTapPause;
- (void)didTapPlay;
@end

