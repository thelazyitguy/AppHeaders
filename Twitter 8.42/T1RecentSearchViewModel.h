//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1UserBadger;
@protocol TFSTwitterCanonicalUser;

@interface T1RecentSearchViewModel : NSObject
{
    id <TFSTwitterCanonicalUser> _user;
    T1UserBadger *_userBadger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1UserBadger *userBadger; // @synthesize userBadger=_userBadger;
@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> user; // @synthesize user=_user;
- (id)init;
- (id)initWithUser:(id)arg1 userBadger:(id)arg2;

@end
