//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonBaseFunction-Protocol.h"

@class DYNProtoListTopicsResponse, DYNSSyncV2SingleTopicSaver, DYNSSyncV2SingleTopicSaverLauncher_Request, NSString;

@interface DYNSSyncV2SingleTopicSaver_$Lambda$4 : NSObject <ComGoogleCommonBaseFunction>
{
    DYNSSyncV2SingleTopicSaver *this$0_;
    DYNSSyncV2SingleTopicSaverLauncher_Request *val$request_;
    DYNProtoListTopicsResponse *val$response_;
}

- (void)dealloc;
- (id)andThenWithJavaUtilFunctionFunction:(id)arg1;
- (id)composeWithJavaUtilFunctionFunction:(id)arg1;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
