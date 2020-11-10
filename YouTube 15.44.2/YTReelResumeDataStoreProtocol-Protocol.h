//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, YTICommand;
@protocol YTReelResumeDataStoreObserver;

@protocol YTReelResumeDataStoreProtocol <NSObject>
- (void)removeAllObjects;
- (void)userDidFinishReelWithEndpoint:(YTICommand *)arg1;
- (void)saveEndpoint:(YTICommand *)arg1;
- (YTICommand *)endpointForEndpoint:(YTICommand *)arg1 loadDate:(NSDate *)arg2;
- (void)addReelResumeDataStoreObserver:(id <YTReelResumeDataStoreObserver>)arg1 forEndpoint:(YTICommand *)arg2;
@end

