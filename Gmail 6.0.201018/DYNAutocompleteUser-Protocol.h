//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;
@protocol DYNBotInfo, DYNOrganizationInfo;

@protocol DYNAutocompleteUser <NSObject>
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) id <DYNOrganizationInfo> organizationInfo;
@property(readonly, nonatomic) unsigned int presenceState;
@property(readonly, nonatomic) NSString *photoUrl;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSNumber *membershipCount;
@property(readonly, nonatomic) NSString *stringId;
@property(readonly, nonatomic) NSString *email;
@property(readonly, nonatomic) id <DYNBotInfo> botInfo;
@end
