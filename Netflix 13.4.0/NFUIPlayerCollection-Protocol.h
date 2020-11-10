//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;
@protocol NFUIPlayer;

@protocol NFUIPlayerCollection
- (void)resumeAllExceptPlayersWithIds:(NSArray *)arg1;
- (void)pauseAllExceptPlayersWithIds:(NSArray *)arg1;
- (void)stopAllExceptPlayersWithIds:(NSArray *)arg1;
- (void)resumeAllPlayers;
- (void)pauseAllPlayers;
- (void)stopAllPlayers;
- (id <NFUIPlayer>)playerWithId:(NSString *)arg1;
- (NSArray *)players;
@property(nonatomic) unsigned long long maxConcurrentPlayback;
@property(nonatomic) long long loadPriority;
@property(nonatomic) unsigned long long maxConcurrentLoading;
@property(nonatomic, readonly) NSString *collectionId;
@end

