//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UJET/NSObject-Protocol.h>

@class UjetSwipeView;

@protocol UjetSwipeViewDelegate <NSObject>

@optional
- (void)swipeView:(UjetSwipeView *)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)swipeView:(UjetSwipeView *)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)swipeViewDidEndScrollingAnimation:(UjetSwipeView *)arg1;
- (void)swipeViewDidEndDecelerating:(UjetSwipeView *)arg1;
- (void)swipeViewWillBeginDecelerating:(UjetSwipeView *)arg1;
- (void)swipeViewDidEndDragging:(UjetSwipeView *)arg1 willDecelerate:(_Bool)arg2;
- (void)swipeViewWillBeginDragging:(UjetSwipeView *)arg1;
- (void)swipeViewCurrentItemIndexDidChange:(UjetSwipeView *)arg1;
- (void)swipeViewDidScroll:(UjetSwipeView *)arg1;
- (struct CGSize)swipeViewItemSize:(UjetSwipeView *)arg1;
@end
