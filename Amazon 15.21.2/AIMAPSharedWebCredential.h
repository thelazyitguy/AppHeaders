//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface AIMAPSharedWebCredential : NSObject
{
    _Bool isCredentialFromSharedStorage;
    NSDictionary *previousCredential;
    NSDictionary *credential;
    _Bool isCredentialAvailableInSharedStorage;
}

+ (id)getInstance;
@property(retain, nonatomic) NSDictionary *previousCredential; // @synthesize previousCredential;
@property(retain, nonatomic) NSDictionary *credential; // @synthesize credential;
@property(nonatomic) _Bool isCredentialAvailableInSharedStorage; // @synthesize isCredentialAvailableInSharedStorage;
@property(nonatomic) _Bool isCredentialFromSharedStorage; // @synthesize isCredentialFromSharedStorage;
- (void).cxx_destruct;
- (CDUnknownBlockType)getCompletionBlockWithSuccessBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)requestCredentialFromSharedWebCredential:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (long long)isAnUpdate;
- (void)resetAll;
- (void)initializeForNewLogin;
- (_Bool)isFeatureSupported;

@end
