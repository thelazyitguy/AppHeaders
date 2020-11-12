//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSCommonGroupId.h"

#import "DYNSpaceId-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@class NSString;
@protocol DYNGroupId, DYNSpaceId;

@interface DYNSCommonSpaceId : DYNSCommonGroupId <DYNSpaceId, JavaIoSerializable>
{
}

- (id)toProto;
- (id)getType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned int type;
@property(readonly, nonatomic) NSString *stringId;
@property(readonly, nonatomic) id <DYNSpaceId> spaceId;
@property(readonly, nonatomic) id <DYNGroupId> dmId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
