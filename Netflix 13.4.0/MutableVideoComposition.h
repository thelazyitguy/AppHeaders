//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/VideoComposition.h>

#import <Nbp/NFMutableVideoComposition-Protocol.h>

@class NSString;

@interface MutableVideoComposition : VideoComposition <NFMutableVideoComposition>
{
}

+ (id)createVideoCompositionForViewableId:(id)arg1 initialName:(id)arg2 startTime:(double)arg3 endTime:(double)arg4;
- (void)localizeClip:(id)arg1 forLocale:(id)arg2 localizedViewableId:(id)arg3 startTime:(double)arg4;
- (void)makeRangeSkippable:(id)arg1;
- (void)removeClip:(id)arg1;
- (void)addTransitionFromSegment:(id)arg1 toSegment:(id)arg2 asDefault:(_Bool)arg3 properties:(id)arg4;
- (void)insertClip:(id)arg1 viewableId:(id)arg2 startTime:(double)arg3 endTime:(double)arg4 afterClip:(id)arg5;
- (void)appendClip:(id)arg1 viewableId:(id)arg2 startTime:(double)arg3 endTime:(double)arg4;
- (void)prependClip:(id)arg1 viewableId:(id)arg2 startTime:(double)arg3 endTime:(double)arg4;
- (void)combineClip1:(id)arg1 withClip2:(id)arg2 newClipName:(id)arg3;
- (void)splitClip:(id)arg1 atOffset:(double)arg2 firstClipName:(id)arg3 secondClipName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *playgraphId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *transitionType;
@property(readonly, nonatomic) NSString *type;

@end
