//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2SetDndDurationSyncLauncher_Request.h"

@class DYNSCommonInternalRequestContext, JavaUtilOptional;

@interface DYNSSyncV2AutoValue_SetDndDurationSyncLauncher_Request : DYNSSyncV2SetDndDurationSyncLauncher_Request
{
    DYNSCommonInternalRequestContext *requestContext_;
    long long dndDurationMicros_;
    JavaUtilOptional *clientState_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getClientState;
- (long long)getDndDurationMicros;
- (id)getRequestContext;

@end

