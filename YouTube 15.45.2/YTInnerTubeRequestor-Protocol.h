//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTInnerTubeRequest;
@protocol YTApiaryParser;

@protocol YTInnerTubeRequestor <NSObject>
- (void)clearCaches;
- (void (^)(id, YTInnerTubeResponseCacheContext *))convertLegacyResponseBlock:(void (^)(id, _Bool))arg1;
- (void)makeInnerTubeRequest:(YTInnerTubeRequest *)arg1 withParser:(id <YTApiaryParser>)arg2 valueHandler:(void (^)(GPBMessage *, YTInnerTubeResponseCacheContext *))arg3 completionHandler:(void (^)(NSError *, YTInnerTubeResponseCacheContext *, YTNetworkRequestStatistics *))arg4 retryEnabled:(_Bool)arg5 timeoutInterval:(double)arg6 enableLatencyTicks:(_Bool)arg7;
- (void)makeInnerTubeRequest:(YTInnerTubeRequest *)arg1 withParser:(id <YTApiaryParser>)arg2 completionBlock:(void (^)(YTInnerTubeResponseWrapper *, NSError *))arg3 retryEnabled:(_Bool)arg4 timeoutInterval:(double)arg5 enableLatencyTicks:(_Bool)arg6 mutableSharedData:(id)arg7 nilIdentityIsSignedOut:(_Bool)arg8;
- (void)makeInnerTubeRequest:(YTInnerTubeRequest *)arg1 withParser:(id <YTApiaryParser>)arg2 completionBlock:(void (^)(YTInnerTubeResponseWrapper *, NSError *))arg3 retryEnabled:(_Bool)arg4 timeoutInterval:(double)arg5 enableLatencyTicks:(_Bool)arg6 mutableSharedData:(id)arg7;
- (void)makeInnerTubeRequest:(YTInnerTubeRequest *)arg1 withParser:(id <YTApiaryParser>)arg2 responseBlock:(void (^)(id, YTInnerTubeResponseCacheContext *))arg3 errorBlock:(void (^)(NSError *))arg4 retryEnabled:(_Bool)arg5 timeoutInterval:(double)arg6;
- (void)makeInnerTubeRequest:(YTInnerTubeRequest *)arg1 withParser:(id <YTApiaryParser>)arg2 responseBlock:(void (^)(id, YTInnerTubeResponseCacheContext *))arg3 errorBlock:(void (^)(NSError *))arg4 retryEnabled:(_Bool)arg5;
@end
