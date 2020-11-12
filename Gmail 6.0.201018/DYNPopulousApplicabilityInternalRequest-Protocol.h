//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DYNAccountUserCapabilities, DYNGroupGuestAccessSettings, DYNGroupId, DYNOrganizationInfo;

@protocol DYNPopulousApplicabilityInternalRequest <NSObject>
@property(readonly, nonatomic) _Bool isAsynchronousRequest;
@property(readonly, nonatomic) _Bool newGroupGuestAccessEnabled;
@property(readonly, nonatomic) unsigned int newGroupType;
@property(readonly, nonatomic) id <DYNAccountUserCapabilities> accountUserCapabilities;
@property(readonly, nonatomic) id <DYNOrganizationInfo> contextGroupOrganizationInfo;
@property(readonly, nonatomic) _Bool isAccountUserGuestInContextGroup;
@property(readonly, nonatomic) id <DYNGroupGuestAccessSettings> contextGroupGuestAccessSettings;
@property(readonly, nonatomic) id <DYNGroupId> contextGroupId;
@end
