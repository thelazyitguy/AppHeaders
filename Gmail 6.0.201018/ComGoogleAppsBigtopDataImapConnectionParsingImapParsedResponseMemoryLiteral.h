//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataImapConnectionParsingImapParsedResponseElement-Protocol.h"

@class IOSByteArray, NSString;

@interface ComGoogleAppsBigtopDataImapConnectionParsingImapParsedResponseMemoryLiteral : NSObject <ComGoogleAppsBigtopDataImapConnectionParsingImapParsedResponseElement>
{
    IOSByteArray *bytes_;
}

- (void)dealloc;
- (id)getAsStream;
- (int)getSizeBytes;
- (_Bool)isByteStream;
- (_Bool)isString;
- (_Bool)isList;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
