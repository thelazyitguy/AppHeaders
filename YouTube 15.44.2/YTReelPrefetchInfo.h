//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface YTReelPrefetchInfo : NSObject
{
    NSArray *_reelModels;
}

- (void).cxx_destruct;
- (id)indexPathForReelAfterIndexPath:(id)arg1;
- (id)indexPathAfterIndexPath:(id)arg1;
- (id)indexPathBeforeIndexPath:(id)arg1;
- (unsigned long long)numClipsInReel:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numReels;
- (void)refreshReelModels:(id)arg1;
- (id)initWithReelModels:(id)arg1;

@end

