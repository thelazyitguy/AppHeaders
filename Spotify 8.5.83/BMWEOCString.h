//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMWEOCObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface BMWEOCString : BMWEOCObject <NSCopying>
{
    NSString *_value;
}

- (void).cxx_destruct;
@property(retain) NSString *value; // @synthesize value=_value;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)object;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

