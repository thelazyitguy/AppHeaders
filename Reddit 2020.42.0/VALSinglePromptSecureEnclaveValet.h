//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Valet/VALSecureEnclaveValet.h>

@class LAContext;

@interface VALSinglePromptSecureEnclaveValet : VALSecureEnclaveValet
{
    LAContext *_context;
}

- (void).cxx_destruct;
@property(retain) LAContext *context; // @synthesize context=_context;
- (id)_contextOptions;
- (void)requirePromptOnNextAccess;
- (id)stringForKey:(id)arg1 userPrompt:(id)arg2 userCancelled:(inout _Bool *)arg3;
- (id)stringForKey:(id)arg1 userPrompt:(id)arg2;
- (id)objectForKey:(id)arg1 userPrompt:(id)arg2 userCancelled:(inout _Bool *)arg3;
- (id)objectForKey:(id)arg1 userPrompt:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)initWithSharedAccessGroupIdentifier:(id)arg1 accessControl:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 accessControl:(unsigned long long)arg2;

@end

