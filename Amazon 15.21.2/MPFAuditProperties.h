//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface MPFAuditProperties : CoralModel <NSCoding, NSCopying>
{
    NSString *_source;
    NSDate *_createdAt;
    NSDate *_lastUpdatedAt;
}

+ (id)type;
@property(retain, nonatomic) NSDate *lastUpdatedAt; // @synthesize lastUpdatedAt=_lastUpdatedAt;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;

@end
