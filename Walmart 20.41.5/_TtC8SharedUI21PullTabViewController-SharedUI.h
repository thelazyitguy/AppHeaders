//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/_TtC8SharedUI21PullTabViewController.h>

@class NSString;

@interface _TtC8SharedUI21PullTabViewController (SharedUI)
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic, readonly) NSString *analyticsPageName;
- (id)customAttributesFor:(long long)arg1;
@property(nonatomic, readonly) _Bool manuallyTrackPageView;
@property(nonatomic, readonly) _Bool manuallyTrackButtonTap;
@end
