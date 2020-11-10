//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationPersistence-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface SPTRemoteConfigurationPersistenceImplementation : NSObject <SPTRemoteConfigurationPersistence>
{
    NSDictionary *_typeDictionary;
    NSURL *_cacheFolderUrl;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *cacheFolderUrl; // @synthesize cacheFolderUrl=_cacheFolderUrl;
@property(retain, nonatomic) NSDictionary *typeDictionary; // @synthesize typeDictionary=_typeDictionary;
- (void)createFolderIfMissing:(id)arg1;
- (id)defaultCacheFolder;
- (id)fileURLWithName:(id)arg1;
- (void)clearFileWithKey:(id)arg1;
- (void)clearConfigurationFileForType:(unsigned long long)arg1;
- (id)restoreConfigurationWithURL:(id)arg1;
- (void)storeConfiguration:(id)arg1 URL:(id)arg2;
- (void)clearLocalOverride;
- (id)restoreLocalOverride;
- (void)storeLocalOverride:(id)arg1;
- (void)clearAll;
- (id)restoreConfigurationWithType:(unsigned long long)arg1;
- (void)storeConfiguration:(id)arg1 type:(unsigned long long)arg2;
- (id)init;
- (id)initWithFolderUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
