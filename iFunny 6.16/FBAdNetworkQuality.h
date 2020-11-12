//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBAdMovingAverage, OS_dispatch_queue;

@interface FBAdNetworkQuality : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <FBAdMovingAverage> _downloadBandwidthMovingAverage;
    id <FBAdMovingAverage> _uploadBandwidthMovingAverage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBAdMovingAverage> uploadBandwidthMovingAverage; // @synthesize uploadBandwidthMovingAverage=_uploadBandwidthMovingAverage;
@property(readonly, nonatomic) id <FBAdMovingAverage> downloadBandwidthMovingAverage; // @synthesize downloadBandwidthMovingAverage=_downloadBandwidthMovingAverage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)updateUploadBandwidthEstimate:(double)arg1;
- (void)updateDownloadBandwidthEstimate:(double)arg1;
@property(readonly, nonatomic) unsigned long long uploadBandwidthState;
@property(readonly, nonatomic) double uploadBandwidthEstimate;
@property(readonly, nonatomic) unsigned long long downloadBandwidthState;
@property(readonly, nonatomic) double downloadBandwidthEstimate;
- (void)updateUsingCountOfBytesSent:(unsigned long long)arg1 requestDurationInMiliseconds:(unsigned long long)arg2;
- (void)updateUsingTask:(id)arg1 metrics:(id)arg2;
- (id)initWithFactory:(CDUnknownBlockType)arg1;

@end
