//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2GetAccountOwnerDndStatusSaverLauncher_Request.h"

@class DYNProtoUserStatus, DYNSCommonInternalRequestContext, DYNSCommonInternalRevision;

@interface DYNSSyncV2AutoValue_GetAccountOwnerDndStatusSaverLauncher_Request : DYNSSyncV2GetAccountOwnerDndStatusSaverLauncher_Request
{
    DYNSCommonInternalRequestContext *requestContext_;
    DYNProtoUserStatus *userStatus_;
    DYNSCommonInternalRevision *revision_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getRevision;
- (id)getUserStatus;
- (id)getRequestContext;

@end
