//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRIDrive_CheckPermissionsResponse_FixOptions_Item_AddCollaboratorsInfo, GTLRIDrive_CheckPermissionsResponse_FixOptions_Item_IncreaseDomainVisibilityInfo, GTLRIDrive_CheckPermissionsResponse_FixOptions_Item_WarningInfo, NSArray, NSNumber, NSString;

@interface GTLRIDrive_CheckPermissionsResponse_FixOptions_Item : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRIDrive_CheckPermissionsResponse_FixOptions_Item_AddCollaboratorsInfo *addCollaboratorsInfo; // @dynamic addCollaboratorsInfo;
@property(retain, nonatomic) NSArray *allowedRoles; // @dynamic allowedRoles;
@property(retain, nonatomic) NSArray *fixableFileIds; // @dynamic fixableFileIds;
@property(retain, nonatomic) NSArray *fixableRecipientEmailAddresses; // @dynamic fixableRecipientEmailAddresses;
@property(retain, nonatomic) NSNumber *fixesEverything; // @dynamic fixesEverything;
@property(retain, nonatomic) GTLRIDrive_CheckPermissionsResponse_FixOptions_Item_IncreaseDomainVisibilityInfo *increaseDomainVisibilityInfo; // @dynamic increaseDomainVisibilityInfo;
@property(copy, nonatomic) NSString *optionType; // @dynamic optionType;
@property(retain, nonatomic) GTLRIDrive_CheckPermissionsResponse_FixOptions_Item_WarningInfo *warningInfo; // @dynamic warningInfo;

@end
