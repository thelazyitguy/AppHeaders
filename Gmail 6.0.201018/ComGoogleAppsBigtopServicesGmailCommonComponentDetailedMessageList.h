//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangIterable-Protocol.h"

@class ComGoogleAppsBigtopServicesGmailCommonComponentSummaryMessageList, ComGoogleCommonCollectImmutableList, NSString;

@interface ComGoogleAppsBigtopServicesGmailCommonComponentDetailedMessageList : NSObject <JavaLangIterable>
{
    ComGoogleAppsBigtopServicesGmailCommonComponentSummaryMessageList *summaryMessageList_;
    ComGoogleCommonCollectImmutableList *messages_;
}

+ (void)initialize;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)spliterator;
- (void)forEachWithJavaUtilFunctionConsumer:(id)arg1;
- (id)getSummary;
- (_Bool)isEmpty;
- (int)size;
- (id)getWithInt:(int)arg1;
- (id)getByIdWithNSString:(id)arg1;
- (id)iterator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
