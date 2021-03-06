//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DYNGroupId, DYNSingleRoomService, DYNSpaceId, DYNTopicId;

@interface DYNStreamID : NSObject
{
    id <DYNGroupId> _dmID;
    id <DYNSpaceId> _spaceID;
    id <DYNTopicId> _topicID;
    id <DYNSingleRoomService> _roomService;
    int _type;
}

+ (id)streamIDForSearchWithGroupID:(id)arg1;
+ (id)streamIDForTopicReplyWithSpaceID:(id)arg1 topicID:(id)arg2;
+ (id)streamIDForSpaceWithID:(id)arg1;
+ (id)streamIDForDMWithID:(id)arg1;
+ (id)streamIDWithRoomService:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) id <DYNGroupId> groupID;
@property(readonly, nonatomic) id <DYNTopicId> topicID;
@property(readonly, nonatomic) id <DYNSpaceId> spaceID;
@property(readonly, nonatomic) id <DYNGroupId> dmID;
- (id)initWithSpaceID:(id)arg1 topicID:(id)arg2;
- (id)initWithSpaceID:(id)arg1;
- (id)initWithDMID:(id)arg1;
- (id)initWithRoomService:(id)arg1;

@end

