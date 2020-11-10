//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GFMApiResponseHeader, GFMAppUpgradeStatus, GFMGetFamilyOnboardFlowConfigResponse_BirthdayData, GFMGetFamilyOnboardFlowConfigResponse_FopData, GPBEnumArray, NSMutableArray;

@interface GFMGetFamilyOnboardFlowConfigResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(retain, nonatomic) GFMGetFamilyOnboardFlowConfigResponse_BirthdayData *birthdayData; // @dynamic birthdayData;
@property(retain, nonatomic) GFMGetFamilyOnboardFlowConfigResponse_FopData *fopData; // @dynamic fopData;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasBirthdayData; // @dynamic hasBirthdayData;
@property(nonatomic) _Bool hasFopData; // @dynamic hasFopData;
@property(nonatomic) _Bool hasLaunchInviteFlowOnCompletion; // @dynamic hasLaunchInviteFlowOnCompletion;
@property(nonatomic) _Bool hasUpgradeStatus; // @dynamic hasUpgradeStatus;
@property(retain, nonatomic) GPBEnumArray *inviteeRoleArray; // @dynamic inviteeRoleArray;
@property(readonly, nonatomic) unsigned long long inviteeRoleArray_Count; // @dynamic inviteeRoleArray_Count;
@property(nonatomic) _Bool launchInviteFlowOnCompletion; // @dynamic launchInviteFlowOnCompletion;
@property(retain, nonatomic) NSMutableArray *pagesArray; // @dynamic pagesArray;
@property(readonly, nonatomic) unsigned long long pagesArray_Count; // @dynamic pagesArray_Count;
@property(retain, nonatomic) GFMAppUpgradeStatus *upgradeStatus; // @dynamic upgradeStatus;

@end

