//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNCalendarUser-Protocol.h"
#import "DYNSUIModelsUiCalendarUser-Protocol.h"

@class NSString;

@interface DYNSUIModelsImplUiCalendarUserImpl : NSObject <DYNCalendarUser, DYNSUIModelsUiCalendarUser>
{
}

@property(readonly, copy, nonatomic) NSString *firstName;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *email;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAccountUser;
@property(readonly) Class superclass;

@end
