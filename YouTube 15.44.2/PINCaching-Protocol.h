//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol PINCaching <NSObject>
@property(readonly) NSString *name;
- (void)removeAllObjects;
- (void)removeExpiredObjects;
- (void)trimToDate:(NSDate *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 withCost:(unsigned long long)arg3 ageLimit:(double)arg4;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 withCost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 withAgeLimit:(double)arg3;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
- (_Bool)containsObjectForKey:(NSString *)arg1;
- (void)removeAllObjectsAsync:(void (^)(id <PINCaching>))arg1;
- (void)removeExpiredObjectsAsync:(void (^)(id <PINCaching>))arg1;
- (void)trimToDateAsync:(NSDate *)arg1 completion:(void (^)(id <PINCaching>))arg2;
- (void)removeObjectForKeyAsync:(NSString *)arg1 completion:(void (^)(id <PINCaching>, NSString *, id))arg2;
- (void)setObjectAsync:(id)arg1 forKey:(NSString *)arg2 withCost:(unsigned long long)arg3 ageLimit:(double)arg4 completion:(void (^)(id <PINCaching>, NSString *, id))arg5;
- (void)setObjectAsync:(id)arg1 forKey:(NSString *)arg2 withCost:(unsigned long long)arg3 completion:(void (^)(id <PINCaching>, NSString *, id))arg4;
- (void)setObjectAsync:(id)arg1 forKey:(NSString *)arg2 withAgeLimit:(double)arg3 completion:(void (^)(id <PINCaching>, NSString *, id))arg4;
- (void)setObjectAsync:(id)arg1 forKey:(NSString *)arg2 completion:(void (^)(id <PINCaching>, NSString *, id))arg3;
- (void)objectForKeyAsync:(NSString *)arg1 completion:(void (^)(id <PINCaching>, NSString *, id))arg2;
- (void)containsObjectForKeyAsync:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end

