//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFUIPlayerFoundation/NSObject-Protocol.h>

@class NFLXOperation, NFUIPlaybackRequest, NSDictionary, NSString;
@protocol NFPlaygraphPlayerDelegate, NFUIPlatformControllerProtocol><NFUIPlatformLoggerProtocol, NFUIPlayerControllerDelegate, NFUIPlaygraphControllerProtocol;

@protocol NFUIPlayerControllerProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
@property(readonly, nonatomic) id <NFUIPlatformControllerProtocol><NFUIPlatformLoggerProtocol> platformController;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
@property(readonly, nonatomic) _Bool allowsExternalPlayback;
@property(readonly, nonatomic) float currentTimePercent;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double duration;
@property(nonatomic) __weak id <NFPlaygraphPlayerDelegate> playgraphDelegate;
@property(nonatomic) float persistentRate;
@property(nonatomic) float rate;
@property(nonatomic) float volume;
@property(nonatomic) long long loopCount;
@property(nonatomic) __weak id <NFUIPlayerControllerDelegate> delegate;
- (void)pipDidStop;
- (void)pipDidStart;
- (void)percentSubtitleFontSize:(double)arg1;
- (void)positionSubtitleWithPercent:(double)arg1;
- (void)stop;
- (void)seek:(double)arg1 completion:(void (^)(_Bool))arg2;
- (void)beginScrubbing;
- (void)pause;
- (void)play;
- (void)cancelLoading;
- (NFLXOperation *)loadOperation:(NFUIPlaybackRequest *)arg1;
- (NFLXOperation *)load:(NFUIPlaybackRequest *)arg1 completion:(void (^)(NFLXResult *))arg2;
- (NFLXOperation *)load:(NFUIPlaybackRequest *)arg1;

@optional
- (void)updateNextSegmentWeightsForSegmentId:(NSString *)arg1 nextSegmentWeights:(NSDictionary *)arg2;
- (void)gotoSegmentId:(NSString *)arg1 time:(double)arg2 userInitiated:(_Bool)arg3;
- (void)gotoSegmentId:(NSString *)arg1 time:(double)arg2;
- (void)gotoNextSegmentFromCurrentSegmentId:(NSString *)arg1 nextSegmentId:(NSString *)arg2 userInitiated:(_Bool)arg3;
- (void)gotoNextSegmentFromCurrentSegmentId:(NSString *)arg1 nextSegmentId:(NSString *)arg2;
- (void)setNextSegmentAfterSegmentId:(NSString *)arg1 nextSegmentId:(NSString *)arg2 userInitiated:(_Bool)arg3;
- (void)setNextSegmentAfterSegmentId:(NSString *)arg1 nextSegmentId:(NSString *)arg2;
- (id <NFUIPlaygraphControllerProtocol>)playgraphController;
@end

