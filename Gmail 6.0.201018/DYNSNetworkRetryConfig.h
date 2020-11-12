//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatHttpRetryConfig-Protocol.h"

@class ComGoogleAppsXplatHttpRetryStrategy, DYNProtoRpcType, JavaUtilOptional, NSString;
@protocol DYNSCommonAppFocusStateTracker;

@interface DYNSNetworkRetryConfig : NSObject <ComGoogleAppsXplatHttpRetryConfig>
{
    id <DYNSCommonAppFocusStateTracker> appFocusStateTracker_;
    _Bool disableSameAppSessionCheck_;
    JavaUtilOptional *startAppSessionId_;
    ComGoogleAppsXplatHttpRetryStrategy *retryStrategy_;
    DYNProtoRpcType *rpcType_;
}

+ (void)initialize;
- (void)dealloc;
- (_Bool)getDisableSameAppSessionCheck;
- (id)getRetryStrategyForWithJavaLangThrowable:(id)arg1;
- (id)getRetryStrategyForWithComGoogleAppsXplatHttpHttpStatus:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
