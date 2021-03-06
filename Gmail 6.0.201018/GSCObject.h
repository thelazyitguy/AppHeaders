//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSCAbstractEntity.h"

@class NSError, NSString;

@interface GSCObject : GSCAbstractEntity
{
    NSString *_objectId;
    unsigned long long _status;
    id _value;
    id _canonicalValue;
    NSError *_error;
}

+ (id)objectWithId:(id)arg1 error:(id)arg2;
+ (id)objectWithId:(id)arg1 value:(id)arg2 status:(unsigned long long)arg3 canonicalValue:(id)arg4;
+ (id)objectWithId:(id)arg1 value:(id)arg2 status:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id canonicalValue; // @synthesize canonicalValue=_canonicalValue;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (id)build;
- (void)loadFromDictionary:(id)arg1;
- (id)toDictionary;

@end

