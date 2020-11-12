//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSAttributedString, NSString, T1ScrollingSegmentedViewController, TFSTwitterEntityImageInfo, UIColor, UIViewController;

@protocol T1ScrollingSegmentedViewControllerDataSource <NSObject>
- (UIViewController *)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 viewControllerAtIndex:(long long)arg2;
- (NSString *)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 titleAtIndex:(long long)arg2;
- (long long)numberOfEntriesForSegmentedViewController:(T1ScrollingSegmentedViewController *)arg1;

@optional
- (NSString *)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 entityTokenAtIndex:(long long)arg2;
- (NSString *)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 accessibilityLabelAtIndex:(long long)arg2;
- (NSAttributedString *)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 attributedTitleAtIndex:(long long)arg2;
- (_Bool)segmentedViewControllerShouldAutoHideNavigationBar:(T1ScrollingSegmentedViewController *)arg1;
- (TFSTwitterEntityImageInfo *)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 badgeImageInfoForItemAtIndex:(long long)arg2;
- (UIColor *)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 customTitleColorAtIndex:(long long)arg2;
- (UIColor *)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 customHighlightedTitleColorAtIndex:(long long)arg2;
@end
