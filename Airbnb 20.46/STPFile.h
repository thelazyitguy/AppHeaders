//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPAPIResponseDecodable-Protocol.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@interface STPFile : NSObject <STPAPIResponseDecodable>
{
    NSString *_fileId;
    NSDate *_created;
    long long _purpose;
    NSNumber *_size;
    NSString *_type;
    NSDictionary *_allResponseFields;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
+ (id)stringFromPurpose:(long long)arg1;
+ (long long)purposeFromString:(id)arg1;
+ (id)stringToPurposeMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(nonatomic) long long purpose; // @synthesize purpose=_purpose;
@property(retain, nonatomic) NSDate *created; // @synthesize created=_created;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
- (_Bool)isEqualToFile:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

