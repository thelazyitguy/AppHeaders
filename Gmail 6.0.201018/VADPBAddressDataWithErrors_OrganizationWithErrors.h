//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBEnumArray, NSString;

@interface VADPBAddressDataWithErrors_OrganizationWithErrors : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOrganization; // @dynamic hasOrganization;
@property(copy, nonatomic) NSString *organization; // @dynamic organization;
@property(retain, nonatomic) GPBEnumArray *organizationErrorsArray; // @dynamic organizationErrorsArray;
@property(readonly, nonatomic) unsigned long long organizationErrorsArray_Count; // @dynamic organizationErrorsArray_Count;

@end
