//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, _TtC5Slack12EmojiWrapper;
@protocol SLKBotGenerics, SLKCallRoomGenerics, SLKChannelGenerics, SLKUserGenerics, SLKUserGroupGenerics;

@protocol _TtP5Slack31SLKMessageDependenciesInterface_
- (id <SLKCallRoomGenerics>)callRoomForId:(NSString *)arg1;
- (id <SLKUserGroupGenerics>)userGroupForId:(NSString *)arg1;
- (id <SLKUserGenerics>)userForId:(NSString *)arg1;
- (_TtC5Slack12EmojiWrapper *)emojiForAlias:(NSString *)arg1;
- (id <SLKChannelGenerics>)channelForId:(NSString *)arg1;
- (id <SLKBotGenerics>)botForId:(NSString *)arg1;
@end
