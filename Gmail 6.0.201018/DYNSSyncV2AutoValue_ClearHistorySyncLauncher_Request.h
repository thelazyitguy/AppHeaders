//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2ClearHistorySyncLauncher_Request.h"

@class DYNSCommonDmId, DYNSCommonInternalRequestContext;

@interface DYNSSyncV2AutoValue_ClearHistorySyncLauncher_Request : DYNSSyncV2ClearHistorySyncLauncher_Request
{
    DYNSCommonInternalRequestContext *requestContext_;
    DYNSCommonDmId *dmId_;
    long long groupSortTime_;
    long long groupRevisionTimeMicros_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (long long)getGroupRevisionTimeMicros;
- (long long)getGroupSortTime;
- (id)getDmId;
- (id)getRequestContext;

@end
