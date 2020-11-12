//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GSCBasicPerson, NSMutableArray, NSString, SFSGPDBasicPerson_AddToCirclesStatus, SFSGPDBasicPerson_Gender;

@interface SFSGPDBasicPerson : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) GSCBasicPerson *gscBasicPerson;

// Remaining properties
@property(retain, nonatomic) SFSGPDBasicPerson_AddToCirclesStatus *addToCirclesStatus; // @dynamic addToCirclesStatus;
@property(retain, nonatomic) NSMutableArray *circleIdArray; // @dynamic circleIdArray;
@property(readonly, nonatomic) unsigned long long circleIdArray_Count; // @dynamic circleIdArray_Count;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *emailId; // @dynamic emailId;
@property(retain, nonatomic) SFSGPDBasicPerson_Gender *gender; // @dynamic gender;
@property(nonatomic) _Bool hasAddToCirclesStatus; // @dynamic hasAddToCirclesStatus;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasEmailId; // @dynamic hasEmailId;
@property(nonatomic) _Bool hasGender; // @dynamic hasGender;
@property(nonatomic) _Bool hasInViewerDomain; // @dynamic hasInViewerDomain;
@property(nonatomic) _Bool hasIsAddToCirclesAllowed; // @dynamic hasIsAddToCirclesAllowed;
@property(nonatomic) _Bool hasIsBlocked; // @dynamic hasIsBlocked;
@property(nonatomic) _Bool hasIsPlusPage; // @dynamic hasIsPlusPage;
@property(nonatomic) _Bool hasIsVerified; // @dynamic hasIsVerified;
@property(nonatomic) _Bool hasObfuscatedGaiaId; // @dynamic hasObfuscatedGaiaId;
@property(nonatomic) _Bool inViewerDomain; // @dynamic inViewerDomain;
@property(nonatomic) _Bool isAddToCirclesAllowed; // @dynamic isAddToCirclesAllowed;
@property(nonatomic) _Bool isBlocked; // @dynamic isBlocked;
@property(nonatomic) _Bool isPlusPage; // @dynamic isPlusPage;
@property(nonatomic) _Bool isVerified; // @dynamic isVerified;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;

@end
