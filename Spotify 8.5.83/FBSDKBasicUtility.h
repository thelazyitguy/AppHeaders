//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKBasicUtility : NSObject
{
}

+ (id)SHA256Hash:(id)arg1;
+ (void)persistAnonymousID:(id)arg1;
+ (id)persistenceFilePath:(id)arg1;
+ (id)retrievePersistedAnonymousID;
+ (id)anonymousID;
+ (id)gzip:(id)arg1;
+ (id)URLDecode:(id)arg1;
+ (id)dictionaryWithQueryString:(id)arg1;
+ (id)URLEncode:(id)arg1;
+ (id)convertRequestValue:(id)arg1;
+ (id)queryStringWithDictionary:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;
+ (id)objectForJSONString:(id)arg1 error:(id *)arg2;
+ (id)_convertObjectToJSONObject:(id)arg1 invalidObjectHandler:(CDUnknownBlockType)arg2 stop:(_Bool *)arg3;
+ (_Bool)dictionary:(id)arg1 setJSONStringForObject:(id)arg2 forKey:(id)arg3 error:(id *)arg4;
+ (id)JSONStringForObject:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;

@end

