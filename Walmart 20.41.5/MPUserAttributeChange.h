//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface MPUserAttributeChange : NSObject
{
    _Bool _changed;
    _Bool _deleted;
    _Bool _isArray;
    id _valueToLog;
    NSString *_key;
    NSDate *_timestamp;
    NSDictionary *_userAttributes;
    id _value;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isArray; // @synthesize isArray=_isArray;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, nonatomic) _Bool changed; // @synthesize changed=_changed;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSDictionary *userAttributes; // @synthesize userAttributes=_userAttributes;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) id valueToLog; // @synthesize valueToLog=_valueToLog;
- (id)initWithUserAttributes:(id)arg1 key:(id)arg2 value:(id)arg3;

@end
