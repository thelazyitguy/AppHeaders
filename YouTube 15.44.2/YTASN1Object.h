//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, YTASN1Cursor, YTASN1Tag;

@interface YTASN1Object : NSObject
{
    char *_bytes;
    YTASN1Tag *_tag;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) char *bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) YTASN1Tag *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) long long lengthWithTag;
@property(readonly, nonatomic) NSData *data;
- (id)description;
@property(readonly, nonatomic) YTASN1Cursor *cursor;
- (id)initWithTag:(id)arg1 bytes:(char *)arg2;

@end

