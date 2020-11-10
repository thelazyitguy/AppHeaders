//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSArray;

@interface GCKMDNSRecord : NSObject <NSCopying>
{
    unsigned short _recordClass;
    NSArray *_name;
    unsigned long long _type;
    long long _receiptTime;
}

+ (_Bool)name:(id)arg1 hasSuffix:(id)arg2;
+ (id)stringForType:(unsigned long long)arg1;
+ (id)stringForLabels:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long receiptTime; // @synthesize receiptTime=_receiptTime;
@property(nonatomic) unsigned short recordClass; // @synthesize recordClass=_recordClass;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isUnicast;
- (_Bool)writeWith:(id)arg1 timestamp:(double)arg2;
- (_Bool)readWith:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 recordClass:(unsigned short)arg3;

@end

