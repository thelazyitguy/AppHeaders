//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTLiveList-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config;
@protocol JBTSpan;

@protocol ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchLiveList <JBTLiveList, JavaObject>
- (ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *)getProducerConfig;
- (void)updateProducerConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *)arg1 withJBTSpan:(id <JBTSpan>)arg2;
@end
