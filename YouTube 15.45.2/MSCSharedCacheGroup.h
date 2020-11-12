//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSCSharedCache, NSString, NSURL;
@protocol GIPGaiaAccountID;

@interface MSCSharedCacheGroup : NSObject
{
    unsigned long long _TTL;
    id <GIPGaiaAccountID> _accountID;
    NSURL *_cacheGroupURL;
    double _defaultMaxAge;
    NSString *_groupName;
    MSCSharedCache *_sharedCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MSCSharedCache *sharedCache; // @synthesize sharedCache=_sharedCache;
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, nonatomic) double defaultMaxAge; // @synthesize defaultMaxAge=_defaultMaxAge;
- (id)registerChangesHandler:(CDUnknownBlockType)arg1;
- (_Bool)removeAllWithError:(id *)arg1;
- (_Bool)removeDataForKey:(id)arg1 error:(id *)arg2;
- (id)dataForKey:(id)arg1 maxAge:(double)arg2 error:(id *)arg3;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)cacheDirectoryURLForName:(id)arg1;
- (id)initWithName:(id)arg1 TTL:(unsigned long long)arg2 accountID:(id)arg3 defaultMaxAge:(double)arg4 sharedCache:(id)arg5 error:(id *)arg6;

@end
