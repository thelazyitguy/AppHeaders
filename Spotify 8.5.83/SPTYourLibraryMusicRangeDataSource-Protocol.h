//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString;
@protocol SPTYourLibraryMusicRangeDataSourceDelegate;

@protocol SPTYourLibraryMusicRangeDataSource <NSObject>
@property(nonatomic) __weak id <SPTYourLibraryMusicRangeDataSourceDelegate> delegate;
@property(readonly, nonatomic) long long totalNumberOfItems;
- (id)itemAtIndexPath:(NSIndexPath *)arg1;
- (void)loadWithSortRules:(NSArray *)arg1 filterRules:(NSArray *)arg2 textFilter:(NSString *)arg3;
@end

