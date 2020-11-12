//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTSignatures-Protocol.h"

@class JavaUtilRandom, NSString;
@protocol JBTSettingsClient;

@interface ComGoogleAppsBigtopSyncClientImplSettingsSignaturesImpl : NSObject <JBTSignatures>
{
    id <JBTSettingsClient> settingsClient_;
    JavaUtilRandom *random_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getReplyMessageSignatureForAliasWithNSString:(id)arg1;
- (id)getNewMessageSignatureForAliasWithNSString:(id)arg1;
- (id)setMultipleSignaturesWithComGoogleCommonCollectImmutableList:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)getAliasSignatureDefaultsList;
- (id)newAliasSignatureDefaultsBuilderWithNSString:(id)arg1;
- (id)getTitledSignatureList;
- (id)newTitledSignatureBuilderWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
