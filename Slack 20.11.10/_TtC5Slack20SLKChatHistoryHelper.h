//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC5Slack20SLKChatHistoryHelper : NSObject
{
}

+ (id)shared;
- (void).cxx_destruct;
- (id)init;
- (void)resetCacheAllTeams;
- (void)resetCacheForTeamId:(id)arg1;
- (void)setMostRecentChannelName:(id)arg1 withTeamId:(id)arg2;
- (void)removeMostRecentThreadTsForChannelId:(id)arg1;
- (void)setMostRecentThreadTsForChannelId:(id)arg1 threadTs:(id)arg2;
- (void)setMostRecentChannelId:(id)arg1 withTeamId:(id)arg2;
- (id)mostRecentThreadTs:(id)arg1;
- (id)mostRecentChannelName:(id)arg1;
- (id)mostRecentChannelId:(id)arg1;

@end
