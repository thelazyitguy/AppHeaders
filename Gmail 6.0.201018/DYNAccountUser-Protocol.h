//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol DYNOrganizationInfo, DYNUserId;

@protocol DYNAccountUser <NSObject>
@property(readonly, nonatomic) _Bool isConsumerUser;
@property(readonly, nonatomic) _Bool isDasherUser;
@property(readonly, nonatomic) id <DYNOrganizationInfo> organizationInfo;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool isInternalUser;
@property(readonly, nonatomic) id <DYNUserId> userId;
@property(readonly, nonatomic) NSString *gaiaId;
@end
