//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PTVGuestRoom : NSObject
{
    NSString *_remoteID;
    unsigned long long _mode;
    NSArray *_users;
    unsigned long long _totalUsersCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long totalUsersCount; // @synthesize totalUsersCount=_totalUsersCount;
@property(readonly, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) NSString *remoteID; // @synthesize remoteID=_remoteID;
- (id)initWithRemoteID:(id)arg1 mode:(unsigned long long)arg2 users:(id)arg3 totalUsersCount:(unsigned long long)arg4;

@end
