//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _TtC7Economy27AwardsLeaderboardBannerView : UIView
{
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: dismissAction
    // Error parsing type: , name: awards
    // Error parsing type: , name: settings
    // Error parsing type: , name: animationConfiguration
    // Error parsing type: , name: currentOffset
    // Error parsing type: , name: startOffset
    // Error parsing type: , name: endOffset
    // Error parsing type: , name: $__lazy_storage_$_displayLink
    // Error parsing type: , name: previousTimestamp
    // Error parsing type: , name: accumulator
    // Error parsing type: , name: targetOffset
    // Error parsing type: , name: targetDistance
    // Error parsing type: , name: resetTime
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didTapClose;
- (void)tickWithSender:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;

@end
