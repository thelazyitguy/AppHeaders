//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFCW444/NSCopying-Protocol.h>

@class GCKApplicationMetadata, NSString;

__attribute__((visibility("hidden")))
@interface GCKApplicationStatus : NSObject <NSCopying>
{
    _Bool _hasMetadata;
    GCKApplicationMetadata *_metadata;
    NSString *_sessionID;
    NSString *_transportID;
    NSString *_statusText;
}

@property(copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(copy, nonatomic) NSString *transportID; // @synthesize transportID=_transportID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) GCKApplicationMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool hasMetadata; // @synthesize hasMetadata=_hasMetadata;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadata:(id)arg1 sessionID:(id)arg2 transportID:(id)arg3 statusText:(id)arg4;
- (id)initWithJSONObject:(id)arg1;
- (id)init;

@end
