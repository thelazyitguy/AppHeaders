//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GHMMeetingSpace_PhoneAccess, NSMutableArray;

@interface GHMCreatePairingPhoneAccessResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPhoneAccess; // @dynamic hasPhoneAccess;
@property(retain, nonatomic) NSMutableArray *otherPhoneAccessesArray; // @dynamic otherPhoneAccessesArray;
@property(readonly, nonatomic) unsigned long long otherPhoneAccessesArray_Count; // @dynamic otherPhoneAccessesArray_Count;
@property(retain, nonatomic) GHMMeetingSpace_PhoneAccess *phoneAccess; // @dynamic phoneAccess;

@end
