//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FeedSortOptionController;

@protocol FeedSortOptionControllerDelegate <NSObject>
- (void)feedSortOptionController:(FeedSortOptionController *)arg1 didFinishSelectingFeedSort:(unsigned long long)arg2 feedRange:(unsigned long long)arg3;

@optional
- (void)feedSortOptionControllerDidCancel:(FeedSortOptionController *)arg1;
@end

