//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GNSPermission;

@interface GNSPermissionForStrategy : NSObject
{
    GNSPermission *_permission;
}

@property(retain, nonatomic) GNSPermission *permission; // @synthesize permission=_permission;
- (void).cxx_destruct;
- (id)initWithSubParams:(id)arg1 changedHandler:(CDUnknownBlockType)arg2;
- (id)initWithPubParams:(id)arg1 changedHandler:(CDUnknownBlockType)arg2;
- (id)initWithPermissionNeeded:(_Bool)arg1 changedHandler:(CDUnknownBlockType)arg2;

@end
