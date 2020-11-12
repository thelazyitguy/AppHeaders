//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ABSStoreEnvironment;

@interface ABSMetricsFactory : NSObject
{
    id <ABSStoreEnvironment> _envInfo;
}

+ (void)initialize;
@property(readonly, nonatomic) id <ABSStoreEnvironment> envInfo; // @synthesize envInfo=_envInfo;
- (void).cxx_destruct;
- (id)addFromStorageOrFromServerCounter:(id)arg1 isFromStorage:(unsigned char)arg2;
- (long long)now;
- (id)featureServerDownloadFailedEventWithDuration:(unsigned long long)arg1 duration:(long long)arg2 featureId:(id)arg3 segmentId:(id)arg4 errorMessage:(id)arg5 errorCode:(id)arg6 urlString:(id)arg7;
- (id)featureServerDownloadSucceededEventWithDuration:(long long)arg1 featureId:(id)arg2 segmentId:(id)arg3 updateAvailable:(_Bool)arg4;
- (id)rollbackSucceededEventWithDuration:(long long)arg1 featureId:(id)arg2 segmentId:(id)arg3 numRetries:(long long)arg4;
- (id)featureDownloadSucceededEventWithDuration:(long long)arg1 featureId:(id)arg2 segmentId:(id)arg3 numRetries:(long long)arg4 isFromStorage:(unsigned char)arg5;
- (id)certificateFromMemoryEventWithDuration:(long long)arg1 featureId:(id)arg2 segmentId:(id)arg3;
- (id)certificateDownloadSucceededEventWithDuration:(long long)arg1 featureId:(id)arg2 segmentId:(id)arg3 numRetries:(long long)arg4 isFromStorage:(unsigned char)arg5;
- (id)assetDownloadSucceededEventWithDuration:(long long)arg1 featureId:(id)arg2 segmentId:(id)arg3 numRetries:(long long)arg4 isFromStorage:(unsigned char)arg5;
- (id)updateFailedEventWithFailure:(unsigned long long)arg1 duration:(long long)arg2 featureId:(id)arg3 segmentId:(id)arg4 errorMessage:(id)arg5 errorCode:(id)arg6 urlString:(id)arg7;
- (id)initWithEnvInfo:(id)arg1;

@end
