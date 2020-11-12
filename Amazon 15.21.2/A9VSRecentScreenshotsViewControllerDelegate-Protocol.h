//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UIImage;

@protocol A9VSRecentScreenshotsViewControllerDelegate <NSObject>
- (void)resetData;
- (void)setViewToPreCollapsedState;
- (void)setViewToExpandedState;
- (void)setViewToCollapsedState;
- (struct CGSize)cellSize;
- (long long)numberOfItemsInExpandedState;
- (long long)numberOfItemsInCollapsedState;
- (long long)cellsPerRow;
- (void)didSelectItemAtIndexPath:(NSIndexPath *)arg1 screenPos:(struct CGPoint)arg2;
- (void)refreshScreenshotsListWithCompletion:(void (^)(_Bool))arg1;
- (UIImage *)screenShotAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)isViewPreCollapsed;
@end
