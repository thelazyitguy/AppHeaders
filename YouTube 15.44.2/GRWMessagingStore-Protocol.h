//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol GRWMessagingStore <NSObject>
- (_Bool)removeAllEntitiesOfType:(long long)arg1;
- (_Bool)removeEntitiesOfType:(long long)arg1 forUserID:(NSString *)arg2;
- (NSArray *)userIDsWithStoredEntitiesOfType:(long long)arg1;
- (_Bool)hasEntitiesOfType:(long long)arg1 forUserID:(NSString *)arg2;
- (void)storeEntities:(NSArray *)arg1 ofType:(long long)arg2 forUserID:(NSString *)arg3;
- (NSArray *)entitiesOfType:(long long)arg1 forUserID:(NSString *)arg2;
@end

