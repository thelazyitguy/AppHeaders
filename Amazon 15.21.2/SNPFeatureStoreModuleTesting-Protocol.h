//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString, NSURL, RCTBridge;

@protocol SNPFeatureStoreModuleTesting
@property(retain) RCTBridge *bridge;
- (void)enqueueApplicationScript:(NSData *)arg1 url:(NSURL *)arg2 onComplete:(void (^)(void))arg3;
- (void)loadByUrl:(NSURL *)arg1 resolve:(void (^)(id))arg2 reject:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)loadByName:(NSString *)arg1 withContext:(NSString *)arg2 cdnFallBack:(_Bool)arg3 resolve:(void (^)(id))arg4 reject:(void (^)(NSString *, NSString *, NSError *))arg5;
@end
