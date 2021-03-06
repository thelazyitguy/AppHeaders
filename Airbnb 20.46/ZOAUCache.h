//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ZOAUCache : NSObject
{
    NSMutableArray *_loginCacheNameArray;
    NSMutableArray *_identifyCacheNameArrayByCU;
    NSMutableArray *_identifyCacheNameArrayByCT;
}

+ (id)keychainGetDataWithAccountIdentifier:(id)arg1 andServiceIdentifier:(id)arg2;
+ (_Bool)keychainSaveData:(id)arg1 withAccountIdentifier:(id)arg2 andServiceIdentifier:(id)arg3;
+ (id)keychainDicWithAccountId:(id)arg1 andServiceId:(id)arg2;
+ (id)getPubKey;
+ (void)keepPubKey:(id)arg1;
+ (id)getApiKey;
+ (void)keepApiKey:(id)arg1;
+ (id)sharedCacheUtil;
@property(retain, nonatomic) NSMutableArray *identifyCacheNameArrayByCT; // @synthesize identifyCacheNameArrayByCT=_identifyCacheNameArrayByCT;
@property(retain, nonatomic) NSMutableArray *identifyCacheNameArrayByCU; // @synthesize identifyCacheNameArrayByCU=_identifyCacheNameArrayByCU;
@property(retain, nonatomic) NSMutableArray *loginCacheNameArray; // @synthesize loginCacheNameArray=_loginCacheNameArray;
- (void).cxx_destruct;
- (void)clearZOAUAllCache;
- (void)clearZOAUIdentifyCacheByCT;
- (void)clearZOAUIdentifyCacheByCU;
- (void)clearZOAULoginCache;
- (void)getIdentifyCacheWithPrivateIP:(id)arg1 result:(CDUnknownBlockType)arg2 requestContext:(unsigned long long)arg3;
- (_Bool)setIdentifyCacheWithKey:(id)arg1 value:(id)arg2 requestContext:(unsigned long long)arg3;
- (_Bool)expiryCheck:(id)arg1;
- (id)convertDataToDic:(id)arg1;
- (id)convertDicToData:(id)arg1;
- (void)getZOAULoginCacheWithPrivateIP:(id)arg1 result:(CDUnknownBlockType)arg2 requestContext:(unsigned long long)arg3;
- (_Bool)setZOAULoginCacheWithKey:(id)arg1 value:(id)arg2 requestContext:(unsigned long long)arg3;
- (id)getBackPrivateIPWithoutCacheType:(id)arg1;
- (id)convertBase64StringToCacheKey:(id)arg1;
- (id)convertCacheKeyToBase64String:(id)arg1;
- (id)generateOneCacheKey:(_Bool)arg1 key:(id)arg2 context:(unsigned long long)arg3;

@end

