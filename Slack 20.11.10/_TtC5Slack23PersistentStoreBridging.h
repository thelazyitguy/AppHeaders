//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@interface _TtC5Slack23PersistentStoreBridging : _TtCs12_SwiftObject
{
    // Error parsing type: , name: persistentStore
}

- (id)writeTeamWithTsid:(id)arg1 emojiCacheTs:(id)arg2;
- (id)writeTeamWithTsid:(id)arg1 commandsCacheTs:(id)arg2;
- (id)writePinWithTsid:(id)arg1 pinType:(long long)arg2 isPinned:(_Bool)arg3;
- (id)writeMessageWithTsid:(id)arg1 text:(id)arg2;
- (id)writeMessageWithClientMessageId:(id)arg1 text:(id)arg2;
- (id)tombstoneFileWithTsid:(id)arg1;
- (id)writeUsersWithJsonUsers:(id)arg1;
- (id)createUserWithTsid:(id)arg1 isAdmin:(_Bool)arg2 isOwner:(_Bool)arg3 isMe:(_Bool)arg4 name:(id)arg5;
- (id)markChannelReadWithTsid:(id)arg1;

@end
