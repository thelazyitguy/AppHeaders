//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataImapConnectionParsingImapParsedResponseElement-Protocol.h"

@class ComGoogleCommonCollectImmutableList, NSString;

@interface ComGoogleAppsBigtopDataImapConnectionParsingImapParsedResponseElementList : NSObject <ComGoogleAppsBigtopDataImapConnectionParsingImapParsedResponseElement>
{
    ComGoogleCommonCollectImmutableList *list_;
}

+ (void)initialize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (int)getSizeBytes;
- (_Bool)containsWithNSString:(id)arg1;
- (id)getStringWithKeyThatStartsWithWithNSString:(id)arg1;
- (id)getQuotedOrLiteralStringWithKeyWithNSString:(id)arg1 withJavaNioCharsetCharset:(id)arg2;
- (id)getStringWithKeyWithNSString:(id)arg1;
- (id)getKeyedListWithNSString:(id)arg1;
- (id)getElementWithKeyThatStartsWithWithNSString:(id)arg1;
- (id)getElementWithKeyWithNSString:(id)arg1;
- (id)getQuotedOrLiteralStringWithInt:(int)arg1 withJavaNioCharsetCharset:(id)arg2;
- (id)getStringWithInt:(int)arg1;
- (id)getListWithInt:(int)arg1;
- (id)getElementWithInt:(int)arg1;
- (_Bool)elementAtIndexStartWithWithInt:(int)arg1 withNSString:(id)arg2;
- (_Bool)elementAtIndexEqualsWithInt:(int)arg1 withNSString:(id)arg2;
- (_Bool)isEmpty;
- (int)size;
- (_Bool)isByteStream;
- (_Bool)isList;
- (_Bool)isString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

