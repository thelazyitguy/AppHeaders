//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNRoster-Protocol.h"
#import "DYNSUIModelsUiRoster-Protocol.h"

@class NSNumber, NSString;
@protocol DYNOrganizationInfo, DYNRosterId;

@interface DYNSUIModelsImplUiRosterImpl : NSObject <DYNRoster, DYNSUIModelsUiRoster>
{
}

- (id)getNameString;
@property(readonly, nonatomic) id <DYNOrganizationInfo> organizationInfo;
@property(readonly, nonatomic) NSNumber *membershipCount;
@property(readonly, nonatomic) NSString *avatarUrl;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *email;
@property(readonly, nonatomic) id <DYNRosterId> rosterId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
