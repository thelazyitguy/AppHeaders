//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSArray;
@protocol GMUClusterItem;

@protocol GMUClusterAlgorithm <NSObject>
- (NSArray *)clustersAtZoom:(float)arg1;
- (void)clearItems;
- (void)removeItem:(id <GMUClusterItem>)arg1;
- (void)addItems:(NSArray *)arg1;
@end

