//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCaribouComponentsServerpermidsItemServerPermIdGenerator-Protocol.h"

@class JavaUtilRandom, NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleCaribouComponentsServerpermidsItemServerPermIdGeneratorImpl : NSObject <ComGoogleCaribouComponentsServerpermidsItemServerPermIdGenerator>
{
    JavaUtilRandom *random_;
    id <JavaxInjectProvider> generateItemServerPermIdsForMessageBasedUiProvider_;
}

- (void)dealloc;
- (id)createItemServerPermIdForReplyMessageWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)generateItemServerPermIdForMessageWithNSString:(id)arg1;
- (id)createItemServerPermIdForMessageWithNSString:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
