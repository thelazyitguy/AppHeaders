//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKACLFixing-Protocol.h"

@class GTLRIDriveService, NSString;

@interface GDKACLFixerService : NSObject <GDKACLFixing>
{
    GTLRIDriveService *_driveService;
}

+ (id)driveCollaboratorInfoForCollaboratorInfo:(id)arg1;
+ (id)driveDomainInfoForDomainVisibilityInfo:(id)arg1;
+ (id)driveFixItemForFixItem:(id)arg1 driveIDResourceKeyMap:(id)arg2;
+ (id)stringForOption:(int)arg1;
+ (int)optionForString:(id)arg1;
+ (int)fixStateFromString:(id)arg1;
+ (int)roleForRoleString:(id)arg1;
+ (id)stringFromRole:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) GTLRIDriveService *driveService; // @synthesize driveService=_driveService;
- (void)fixACLWithOption:(int)arg1 withRole:(int)arg2 forFileIDResourceKeyPairs:(id)arg3 forRecipients:(id)arg4 snackbarController:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fixACLWithOption:(int)arg1 withRole:(int)arg2 forFileIDResourceKeyPairs:(id)arg3 forRecipients:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)checkACLStateWithRole:(int)arg1 forFileIDResourceKeyPairs:(id)arg2 forRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithDriveService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
