//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplCommonScheduledsendScheduledSendCommonComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplCommonScheduledsendDaggerScheduledSendCommonComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplCommonScheduledsendScheduledSendCommonComponentImpl>
{
    id <JavaxInjectProvider> getSettingsClientProvider_;
    id <JavaxInjectProvider> timeServiceProvider_;
    id <JavaxInjectProvider> getUserActionRecorderProvider_;
    id <JavaxInjectProvider> getLabelCountsProvider_;
    id <JavaxInjectProvider> getTranslationEngineProvider_;
    id <JavaxInjectProvider> translatorProvider_;
    id <JavaxInjectProvider> getDateTimeFormatterProvider_;
    id <JavaxInjectProvider> scheduledSendHelperProvider_;
}

- (void)dealloc;
- (id)getScheduledSendHelper;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
