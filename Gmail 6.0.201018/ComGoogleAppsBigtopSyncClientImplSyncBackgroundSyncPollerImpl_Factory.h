//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplCommonScheduler, ComGoogleAppsBigtopSyncClientImplSyncSyncRunner;
@protocol ComGoogleCommonTimeClock;

@interface ComGoogleAppsBigtopSyncClientImplSyncBackgroundSyncPollerImpl_Factory : NSObject
{
    id <ComGoogleCommonTimeClock> clock_;
    ComGoogleAppsBigtopSyncClientImplCommonScheduler *scheduler_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    ComGoogleAppsBigtopSyncClientImplSyncSyncRunner *syncRunner_;
}

- (void)dealloc;
- (id)createWithComGoogleCommonCollectImmutableList:(id)arg1;

@end
