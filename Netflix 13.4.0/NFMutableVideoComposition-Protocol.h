//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NFMutablePlaygraph-Protocol.h>
#import <Nbp/NFVideoComposition-Protocol.h>

@class NSNumber, NSString;

@protocol NFMutableVideoComposition <NFVideoComposition, NFMutablePlaygraph>
- (void)localizeClip:(NSString *)arg1 forLocale:(NSString *)arg2 localizedViewableId:(NSNumber *)arg3 startTime:(double)arg4;
- (void)makeRangeSkippable:(NSString *)arg1;
- (void)removeClip:(NSString *)arg1;
- (void)insertClip:(NSString *)arg1 viewableId:(NSNumber *)arg2 startTime:(double)arg3 endTime:(double)arg4 afterClip:(NSString *)arg5;
- (void)appendClip:(NSString *)arg1 viewableId:(NSNumber *)arg2 startTime:(double)arg3 endTime:(double)arg4;
- (void)prependClip:(NSString *)arg1 viewableId:(NSNumber *)arg2 startTime:(double)arg3 endTime:(double)arg4;
- (void)combineClip1:(NSString *)arg1 withClip2:(NSString *)arg2 newClipName:(NSString *)arg3;
- (void)splitClip:(NSString *)arg1 atOffset:(double)arg2 firstClipName:(NSString *)arg3 secondClipName:(NSString *)arg4;
@end
