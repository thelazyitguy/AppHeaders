//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class CSTLocationProfileInfo, NSString;

@interface SGCCLocationProfileData : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) CSTLocationProfileInfo *cstProfileData;

// Remaining properties
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasProfilePhotoURL; // @dynamic hasProfilePhotoURL;
@property(copy, nonatomic) NSString *profilePhotoURL; // @dynamic profilePhotoURL;

@end
