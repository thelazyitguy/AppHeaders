//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol DYNAccountUserCapabilities, DYNDasherDomainPolicies;

@protocol DYNGlobalDomainSettingsService <NSObject>
@property(readonly, nonatomic) _Bool gmailEnabled;
@property(readonly, nonatomic) _Bool tasksEnabled;
@property(readonly, nonatomic) _Bool canParticipateInGuestAccessEnabledRoomOutsideDasherOrg;
@property(readonly, nonatomic) _Bool canParticipateInGuestAccessEnabledRoomInSameDasherOrg;
@property(readonly, nonatomic) _Bool canDmSomeoneOutsideDasherOrg;
@property(readonly, nonatomic) _Bool canCreateGuestAccessEnabledRoom;
@property(readonly, nonatomic) id <DYNAccountUserCapabilities> accountUserCapabilities;
@property(readonly, nonatomic) _Bool isGuestSettingEnabled;
@property(readonly, nonatomic) _Bool isGoogleDriveSettingEnabled;
@property(readonly, nonatomic) _Bool areNewConversationsOffTheRecord;
@property(readonly, nonatomic) _Bool isOffTheRecordSwitchEnabled;
@property(readonly, nonatomic) _Bool isForcedOnTheRecord;
@property(readonly, nonatomic) _Bool areBotsEnabled;
- (void)updateGlobalDomainSettings:(id <DYNDasherDomainPolicies>)arg1;
@end

