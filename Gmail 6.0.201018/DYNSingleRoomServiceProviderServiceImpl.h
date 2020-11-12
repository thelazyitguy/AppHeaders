//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSingleRoomServiceProviderService-Protocol.h"

@class NSMutableDictionary;
@protocol GIPAccountID;

@interface DYNSingleRoomServiceProviderServiceImpl : NSObject <DYNSingleRoomServiceProviderService>
{
    id <GIPAccountID> _accountID;
    NSMutableDictionary *_roomServicesBySpaceIdString;
}

- (void).cxx_destruct;
- (id)spaceIdStringFromGroup:(id)arg1;
- (id)optimisticSingleRoomServiceWithRoomName:(id)arg1 roomCreationPromise:(id)arg2;
- (id)singleRoomServiceOnCreateGroupSucceededWithGroup:(id)arg1 roomName:(id)arg2;
- (id)newSingleRoomServiceWithGroupName:(id)arg1 spaceId:(id)arg2 group:(id)arg3;
- (id)newSharedLayerService;
- (id)sharedSingleRoomServiceWithSpaceId:(id)arg1;
- (id)fetchSingleRoomServiceForCreatingRoomWithName:(id)arg1 guestAccessEnabled:(_Bool)arg2 spaceType:(unsigned int)arg3 roomatarEmojiString:(id)arg4;
- (id)fetchSingleRoomServiceForCreatingRoomWithName:(id)arg1 guestAccessEnabled:(_Bool)arg2 isFlatRoom:(_Bool)arg3 roomatarEmojiString:(id)arg4;
- (id)initWithAccountID:(id)arg1;

@end
