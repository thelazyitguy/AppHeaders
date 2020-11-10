//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMMediaSourceDelegate-Protocol.h>

@class HAMSampleBuffer, NSObject;
@protocol HAMAsyncSampleBufferSource, OS_dispatch_queue;

@protocol HAMAsyncSampleBufferSourceDelegate <HAMMediaSourceDelegate>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferDeliveryQueue;
- (void)sampleBufferSource:(id <HAMAsyncSampleBufferSource>)arg1 didProduceSampleBuffer:(HAMSampleBuffer *)arg2;
@end
